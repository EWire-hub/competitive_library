#pragma once

#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind() = default;
    UnionFind(int n) : par(n, -1) {}
    void init(int n) { par.assign(n, -1); }

    int root(int x) {
        if(par[x] < 0) return x;
        return par[x] = root(par[x]);
    }

    bool same(int x, int y){return root(x) == root(y);}

    bool merge(int x, int y){
        x = root(x), y = root(y);
        if(x == y) return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x){
        return -par[root(x)];
    }

    vector<std::vector<int>> groups() {
        int n = par.size();
        vector<vector<int>> res(n);
        for(int i = 0; i< n; i++){
            res[root(i)].emplace_back(i);
        }
        res.erase(remove_if(res.begin(), res.end(), [&](vector<int> &v){
            return v.empty();
        }), res.end());
    }
};