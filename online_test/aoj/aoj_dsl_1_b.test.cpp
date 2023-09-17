#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja"

#include "competitive/std/io.hpp"
#include "competitive/std/std.hpp"
#include "competitive/date_structure/unionfind/weighted_unionfind.hpp"

int main() {
    int n, q;
    input(n, q);

    WeightedUnionFind<int> uf(n);
    while (q--) {
        int t;
        input(t);
        if (t == 0) {
            int x, y, z;
            input(x, y, z);
            uf.merge(x, y, z);
        } else {
            int x, y;
            input(x, y);
            if (uf.same(x, y))
                print(uf.diff(x, y));
            else
                print('?');
        }
    }
}