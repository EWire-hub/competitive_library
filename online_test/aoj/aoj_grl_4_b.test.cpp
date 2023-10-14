// clang-format off
#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B"

#include "competitive/std/std.hpp"
#include "competitive/std/io.hpp"
#include "competitive/graph/other/topological_sort.hpp"

// clang-format on
int main() {
    int V, E;
    input(V, E);
    Graph g(V);

    rep(i, E) {
        int u, v;
        input(u, v);
        g.add_edge(u, v, 1, true);
    }

    VI ans = topological_sort(g);
    rep(i, V) print(ans[i]);
}