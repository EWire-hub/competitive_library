#define PROBLEM                               \
    "https://judge.u-aizu.ac.jp/onlinejudge/" \
    "description.jsp?id=GRL_5_C&lang=ja"

#include "../graph/tree/doubling_lowest_common_ancestor.hpp"
#include "../std/io.hpp"
#include "../std/std.hpp"

int main() {
    int n;
    input(n);

    Graph<int> G(n);
    rep(i, n) {
        int k;
        input(k);
        rep(j, k) {
            int c;
            input(c);
            G.add_edge(i, c);
        }
    }

    DoublingLowestCommonAncestor lca(G);

    int q;
    input(q);
    rep(i, q) {
        int u, v;
        input(u, v);
        print(lca.get_lca(u, v));
    }
}