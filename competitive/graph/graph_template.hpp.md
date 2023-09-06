---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: competitive/graph/tree/doubling_lowest_common_ancestor.hpp
    title: "Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\u5148)"
  _extendedVerifiedWith:
  - icon: ':x:'
    path: online_test/AOJ/aoj_grl_5_c.test.cpp
    title: online_test/AOJ/aoj_grl_5_c.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    document_title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\
      \u30C8)"
    links: []
  bundledCode: "#line 2 \"competitive/graph/graph_template.hpp\"\n\n/**\n * @brief\
    \ Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n */\n\
    \ntemplate <class T = long long>\nstruct Edge {\n    int to;\n    T cost;\n  \
    \  int idx;\n\n    Edge() = default;\n    Edge(int to, T cost = 1, int idx = -1)\
    \ : to(to), cost(cost), idx(idx) {}\n};\n\ntemplate <class T = long long>\nstruct\
    \ Graph {\n    vector<vector<Edge<T>>> g;\n    int es;\n\n    Graph() = default;\n\
    \    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t size() const { return\
    \ g.size(); }\n    void add_edge(int from, int to, T cost = 1, bool direction\
    \ = false) {\n        if (!direction) g[to].emplace_back(from, cost, es);\n  \
    \      g[from].emplace_back(to, cost, es++);\n    }\n\n    inline vector<Edge<T>>\
    \ &operator[](const int &k) { return g[k]; }\n\n    inline const vector<Edge<T>>\
    \ &operator[](const int &k) const {\n        return g[k];\n    }\n};\n"
  code: "#pragma once\n\n/**\n * @brief Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\
    \u30D7\u30EC\u30FC\u30C8)\n */\n\ntemplate <class T = long long>\nstruct Edge\
    \ {\n    int to;\n    T cost;\n    int idx;\n\n    Edge() = default;\n    Edge(int\
    \ to, T cost = 1, int idx = -1) : to(to), cost(cost), idx(idx) {}\n};\n\ntemplate\
    \ <class T = long long>\nstruct Graph {\n    vector<vector<Edge<T>>> g;\n    int\
    \ es;\n\n    Graph() = default;\n    explicit Graph(int n) : g(n), es(0) {}\n\n\
    \    size_t size() const { return g.size(); }\n    void add_edge(int from, int\
    \ to, T cost = 1, bool direction = false) {\n        if (!direction) g[to].emplace_back(from,\
    \ cost, es);\n        g[from].emplace_back(to, cost, es++);\n    }\n\n    inline\
    \ vector<Edge<T>> &operator[](const int &k) { return g[k]; }\n\n    inline const\
    \ vector<Edge<T>> &operator[](const int &k) const {\n        return g[k];\n  \
    \  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/graph/graph_template.hpp
  requiredBy:
  - competitive/graph/tree/doubling_lowest_common_ancestor.hpp
  timestamp: '2023-08-23 06:36:28+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - online_test/AOJ/aoj_grl_5_c.test.cpp
documentation_of: competitive/graph/graph_template.hpp
layout: document
redirect_from:
- /library/competitive/graph/graph_template.hpp
- /library/competitive/graph/graph_template.hpp.html
title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
---
