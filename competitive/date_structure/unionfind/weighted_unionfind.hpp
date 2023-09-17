#pragma once

/**
 * @brief 重み付き Union Find
 * @docs docs/weighted_unionfind.md
 */

template <typename T>
struct WeightedUnionFind {
    vector<int> par;
    vector<T> diff_weight;

    WeightedUnionFind() = default;
    WeightedUnionFind(int n) : par(n, -1), diff_weight(n, 0) {}

    int root(int x) {
        if (par[x] < 0) return x;
        int r = root(par[x]);
        diff_weight[x] += diff_weight[par[x]];
        return par[x] = r;
    }

    T weight(int x) {
        root(x);
        return diff_weight[x];
    }

    T diff(int x, int y) { return weight(y) - weight(x); }

    bool same(int x, int y) { return root(x) == root(y); }

    bool merge(int x, int y, T w) {
        w += weight(x);
        w -= weight(y);
        x = root(x), y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) {
            swap(x, y);
            w *= -1;
        }
        par[x] += par[y];
        par[y] = x;
        diff_weight[y] = w;
        return true;
    }

    int size(int x) { return -par[root(x)]; }
};