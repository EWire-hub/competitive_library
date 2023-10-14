---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: competitive/graph/graph_template.hpp
    title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: online_test/aoj/aoj_grl_4_b.test.cpp
    title: online_test/aoj/aoj_grl_4_b.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"competitive/graph/other/topological_sort.hpp\"\n\r\n#line\
    \ 2 \"competitive/graph/graph_template.hpp\"\n\n/**\n * @brief Graph Template(\u30B0\
    \u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n * @docs docs/graph/graph_template.md\n\
    \ */\n\ntemplate <class T = long long>\nstruct Edge {\n    int to;\n    T cost;\n\
    \    int idx;\n\n    Edge() = default;\n    Edge(int to, T cost = 1, int idx =\
    \ -1) : to(to), cost(cost), idx(idx) {}\n};\n\ntemplate <class T = long long>\n\
    struct Graph {\n    vector<vector<Edge<T>>> g;\n    int es;\n\n    Graph() = default;\n\
    \    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t size() const { return\
    \ g.size(); }\n    void add_edge(int from, int to, T cost = 1, bool direction\
    \ = false) {\n        if (!direction) g[to].emplace_back(from, cost, es);\n  \
    \      g[from].emplace_back(to, cost, es++);\n    }\n\n    inline vector<Edge<T>>\
    \ &operator[](const int &k) { return g[k]; }\n\n    inline const vector<Edge<T>>\
    \ &operator[](const int &k) const {\n        return g[k];\n    }\n};\n#line 4\
    \ \"competitive/graph/other/topological_sort.hpp\"\n\r\ntemplate <typename T>\r\
    \nvector<int> topological_sort(const Graph<T> &g) {\r\n    int n = g.size();\r\
    \n    vector<int> in(n, 0);\r\n    for (int i = 0; i < n; i++) {\r\n        for\
    \ (auto e : g[i]) {\r\n            in[e.to]++;\r\n        }\r\n    }\r\n\r\n \
    \   queue<int> que;\r\n    for (int i = 0; i < n; i++) {\r\n        if (in[i]\
    \ == 0) que.push(i);\r\n    }\r\n\r\n    vector<int> res;\r\n    while (!que.empty())\
    \ {\r\n        int v = que.front();\r\n        que.pop();\r\n        res.push_back(v);\r\
    \n        for (auto e : g[v]) {\r\n            if (--in[e.to] == 0) que.push(e.to);\r\
    \n        }\r\n    }\r\n\r\n    return res;\r\n}\n"
  code: "#pragma once\r\n\r\n#include \"../graph_template.hpp\"\r\n\r\ntemplate <typename\
    \ T>\r\nvector<int> topological_sort(const Graph<T> &g) {\r\n    int n = g.size();\r\
    \n    vector<int> in(n, 0);\r\n    for (int i = 0; i < n; i++) {\r\n        for\
    \ (auto e : g[i]) {\r\n            in[e.to]++;\r\n        }\r\n    }\r\n\r\n \
    \   queue<int> que;\r\n    for (int i = 0; i < n; i++) {\r\n        if (in[i]\
    \ == 0) que.push(i);\r\n    }\r\n\r\n    vector<int> res;\r\n    while (!que.empty())\
    \ {\r\n        int v = que.front();\r\n        que.pop();\r\n        res.push_back(v);\r\
    \n        for (auto e : g[v]) {\r\n            if (--in[e.to] == 0) que.push(e.to);\r\
    \n        }\r\n    }\r\n\r\n    return res;\r\n}"
  dependsOn:
  - competitive/graph/graph_template.hpp
  isVerificationFile: false
  path: competitive/graph/other/topological_sort.hpp
  requiredBy: []
  timestamp: '2023-10-14 20:21:07+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - online_test/aoj/aoj_grl_4_b.test.cpp
documentation_of: competitive/graph/other/topological_sort.hpp
layout: document
redirect_from:
- /library/competitive/graph/other/topological_sort.hpp
- /library/competitive/graph/other/topological_sort.hpp.html
title: competitive/graph/other/topological_sort.hpp
---
