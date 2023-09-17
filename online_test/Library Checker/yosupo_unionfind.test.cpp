#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "competitive/std/std.hpp"
#include "competitive/std/io.hpp"
#include "competitive/date_structure/unionfind/unionfind.hpp"

int main() {
    int n, q; input(n, q);
    UnionFind uf(n);
    rep(i, q){
        int c, x, y; input(c, x, y);
        if(c == 0) uf.merge(x, y);
        else {
            print(uf.same(x, y));
        }
    }
}