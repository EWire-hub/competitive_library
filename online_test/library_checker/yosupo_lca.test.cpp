#define PROBLEM "https://judge.yosupo.jp/problem/lca"

#include "competitive/std/std.hpp"
#include "competitive/std/io.hpp"
#include "competitive/graph/tree/doubling_lowest_common_ancestor.hpp"

int main(){
    int N, Q; input(N, Q);

    Graph<int> G(N);
    rep(i, 1, N){
        int p; input(p);
        G.add_edge(i, p);
    }

    DoublingLowestCommonAncestor lca(G);
    rep(i, Q){
        int u, v; input(u, v);
        print(lca.get_lca(u, v));
    }
}