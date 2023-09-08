#pragma once

#include "../graph_template.hpp"

/**
 * @brief Doubling Lowest Common Ancestor (最小共通祖先)
 * @docs docs/doubling_lowest_common_ancestor.md
 */

template <typename T>
struct DoublingLowestCommonAncestor : Graph<T> {
    vector<vector<int>> parent;
    vector<int> depth;

    DoublingLowestCommonAncestor() {}
    DoublingLowestCommonAncestor(const Graph<T> &G, int r = 0) { init(G, r); }

    void init(const Graph<T> &G, int r = 0) {
        int V = (int)G.size();
        int h = 1;
        while ((1 << h) < V) h++;
        parent.assign(h, vector<int>(V, -1));
        depth.assign(V, -1);
        dfs(G, r, -1, 0);
        for (int i = 0; i + 1 < (int)parent.size(); i++)
            for (int v = 0; v < V; v++)
                if (parent[i][v] != -1)
                    parent[i + 1][v] = parent[i][parent[i][v]];
    }

    void dfs(const Graph<T> &G, int v, int p, int d) {
        parent[0][v] = p;
        depth[v] = d;
        for (auto nv : G[v])
            if (nv.to != p) dfs(G, nv.to, v, d + 1);
    }

    int get_lca(int u, int v) {
        if (depth[u] > depth[v]) swap(u, v);
        for (int i = 0; i < (int)parent.size(); i++)
            if ((depth[v] - depth[u]) & (1 << i)) v = parent[i][v];
        if (u == v) return u;
        for (int i = (int)parent.size() - 1; i >= 0; i--) {
            if (parent[i][u] != parent[i][v]) {
                u = parent[i][u];
                v = parent[i][v];
            }
        }
        return parent[0][u];
    }

    int get_dist(int u, int v) {
        return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
    }

    bool is_on_path(int u, int v, int x) {
        return get_dist(u, x) + get_dist(x, v) == get_dist(u, v);
    }

    int climb(int u, int k) {
        if (depth[u] < k) return -1;
        for (int i = (int)parent.size() - 1; i >= 0; i--)
            if ((k >> i) & 1) u = parent[i][u];
        return u;
    }
};