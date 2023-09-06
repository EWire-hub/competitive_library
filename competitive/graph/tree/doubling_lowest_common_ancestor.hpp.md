---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: competitive/graph/graph_template.hpp
    title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/doubling_lowest_common_ancestor.md
    document_title: "Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\
      \u5148)"
    links: []
  bundledCode: "#line 2 \"competitive/graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\n#line 2 \"competitive/graph/graph_template.hpp\"\n\n/**\n * @brief Graph Template(\u30B0\
    \u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n */\n\ntemplate <class T =\
    \ long long>\nstruct Edge {\n    int to;\n    T cost;\n    int idx;\n\n    Edge()\
    \ = default;\n    Edge(int to, T cost = 1, int idx = -1) : to(to), cost(cost),\
    \ idx(idx) {}\n};\n\ntemplate <class T = long long>\nstruct Graph {\n    vector<vector<Edge<T>>>\
    \ g;\n    int es;\n\n    Graph() = default;\n    explicit Graph(int n) : g(n),\
    \ es(0) {}\n\n    size_t size() const { return g.size(); }\n    void add_edge(int\
    \ from, int to, T cost = 1, bool direction = false) {\n        if (!direction)\
    \ g[to].emplace_back(from, cost, es);\n        g[from].emplace_back(to, cost,\
    \ es++);\n    }\n\n    inline vector<Edge<T>> &operator[](const int &k) { return\
    \ g[k]; }\n\n    inline const vector<Edge<T>> &operator[](const int &k) const\
    \ {\n        return g[k];\n    }\n};\n#line 4 \"competitive/graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\n/**\n * @brief Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\
    \u5148)\n * @docs docs/doubling_lowest_common_ancestor.md\n */\n\ntemplate <typename\
    \ T>\nstruct DoublingLowestCommonAncestor : Graph<T> {\n    vector<vector<int>>\
    \ parent;\n    vector<int> depth;\n\n    DoublingLowestCommonAncestor() {}\n \
    \   DoublingLowestCommonAncestor(const Graph<T> &G, int r = 0) { init(G, r); }\n\
    \n    void init(const Graph<T> &G, int r = 0) {\n        int V = (int)G.size();\n\
    \        int h = 1;\n        while ((1 << h) < V) h++;\n        parent.assign(h,\
    \ vector<int>(V, -1));\n        depth.assign(V, -1);\n        dfs(G, r, -1, 0);\n\
    \        for (int i = 0; i + 1 < (int)parent.size(); i++)\n            for (int\
    \ v = 0; v < V; v++)\n                if (parent[i][v] != -1)\n              \
    \      parent[i + 1][v] = parent[i][parent[i][v]];\n    }\n\n    void dfs(const\
    \ Graph<T> &G, int v, int p, int d) {\n        parent[0][v] = p;\n        depth[v]\
    \ = d;\n        for (auto nv : G[v])\n            if (nv.to != p) dfs(G, nv.to,\
    \ v, d + 1);\n    }\n\n    int get_lca(int u, int v) {\n        if (depth[u] >\
    \ depth[v]) swap(u, v);\n        for (int i = 0; i < (int)parent.size(); i++)\n\
    \            if ((depth[v] - depth[u]) & (1 << i)) v = parent[i][v];\n       \
    \ if (u == v) return u;\n        for (int i = (int)parent.size() - 1; i >= 0;\
    \ i--) {\n            if (parent[i][u] != parent[i][v]) {\n                u =\
    \ parent[i][u];\n                v = parent[i][v];\n            }\n        }\n\
    \        return parent[0][u];\n    }\n\n    int get_dist(int u, int v) {\n   \
    \     return dist[u] + dist[v] - 2 * dist[get_lca(u, v)];\n    }\n\n    bool is_on_path(int\
    \ u, int v, int x) {\n        return get_dist(u, x) + get_dist(x, v) == get_dist(u,\
    \ v);\n    }\n\n    int climb(int u, int k) {\n        if (depth[u] < k) return\
    \ -1;\n        for (int i = (int)parent.size() - 1; i >= 0; i--)\n           \
    \ if((k>>i) & 1) u = parent[i][u];\n        return u;\n    }\n};\n"
  code: "#pragma once\n\n#include \"../graph_template.hpp\"\n\n/**\n * @brief Doubling\
    \ Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\u5148)\n * @docs docs/doubling_lowest_common_ancestor.md\n\
    \ */\n\ntemplate <typename T>\nstruct DoublingLowestCommonAncestor : Graph<T>\
    \ {\n    vector<vector<int>> parent;\n    vector<int> depth;\n\n    DoublingLowestCommonAncestor()\
    \ {}\n    DoublingLowestCommonAncestor(const Graph<T> &G, int r = 0) { init(G,\
    \ r); }\n\n    void init(const Graph<T> &G, int r = 0) {\n        int V = (int)G.size();\n\
    \        int h = 1;\n        while ((1 << h) < V) h++;\n        parent.assign(h,\
    \ vector<int>(V, -1));\n        depth.assign(V, -1);\n        dfs(G, r, -1, 0);\n\
    \        for (int i = 0; i + 1 < (int)parent.size(); i++)\n            for (int\
    \ v = 0; v < V; v++)\n                if (parent[i][v] != -1)\n              \
    \      parent[i + 1][v] = parent[i][parent[i][v]];\n    }\n\n    void dfs(const\
    \ Graph<T> &G, int v, int p, int d) {\n        parent[0][v] = p;\n        depth[v]\
    \ = d;\n        for (auto nv : G[v])\n            if (nv.to != p) dfs(G, nv.to,\
    \ v, d + 1);\n    }\n\n    int get_lca(int u, int v) {\n        if (depth[u] >\
    \ depth[v]) swap(u, v);\n        for (int i = 0; i < (int)parent.size(); i++)\n\
    \            if ((depth[v] - depth[u]) & (1 << i)) v = parent[i][v];\n       \
    \ if (u == v) return u;\n        for (int i = (int)parent.size() - 1; i >= 0;\
    \ i--) {\n            if (parent[i][u] != parent[i][v]) {\n                u =\
    \ parent[i][u];\n                v = parent[i][v];\n            }\n        }\n\
    \        return parent[0][u];\n    }\n\n    int get_dist(int u, int v) {\n   \
    \     return dist[u] + dist[v] - 2 * dist[get_lca(u, v)];\n    }\n\n    bool is_on_path(int\
    \ u, int v, int x) {\n        return get_dist(u, x) + get_dist(x, v) == get_dist(u,\
    \ v);\n    }\n\n    int climb(int u, int k) {\n        if (depth[u] < k) return\
    \ -1;\n        for (int i = (int)parent.size() - 1; i >= 0; i--)\n           \
    \ if((k>>i) & 1) u = parent[i][u];\n        return u;\n    }\n};"
  dependsOn:
  - competitive/graph/graph_template.hpp
  isVerificationFile: false
  path: competitive/graph/tree/doubling_lowest_common_ancestor.hpp
  requiredBy: []
  timestamp: '2023-09-06 18:44:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/graph/tree/doubling_lowest_common_ancestor.hpp
layout: document
redirect_from:
- /library/competitive/graph/tree/doubling_lowest_common_ancestor.hpp
- /library/competitive/graph/tree/doubling_lowest_common_ancestor.hpp.html
title: "Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\u5148)"
---
