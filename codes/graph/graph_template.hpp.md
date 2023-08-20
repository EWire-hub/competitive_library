---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"codes/graph/graph_template.hpp\"\n\ntemplate <class T =\
    \ long long>\nstruct Edge\n{\n    int to;\n    T cost;\n    int idx;\n\n    Edge()\
    \ = default;\n    Edge(int to, T cost = 1, int idx = -1) : to(to), cost(cost),\
    \ idx(idx) {}\n};\n\ntemplate <class T = long long>\nstruct Graph\n{\n    vector<vector<Edge>>\
    \ g;\n    int es;\n\n    Graph() = default;\n    explicit Graph(int n) : g(n),\
    \ es(0) {}\n\n    size_t size() const { return g.size(); }\n    void add_edge(int\
    \ from, int to, T cost = 1, bool direction = false)\n    {\n        if (direction)\n\
    \            g[to].emplace_back(from, cost, es);\n        g[from].emplace_back(to,\
    \ cost, es++);\n    }\n};\n"
  code: "#pragma once\n\ntemplate <class T = long long>\nstruct Edge\n{\n    int to;\n\
    \    T cost;\n    int idx;\n\n    Edge() = default;\n    Edge(int to, T cost =\
    \ 1, int idx = -1) : to(to), cost(cost), idx(idx) {}\n};\n\ntemplate <class T\
    \ = long long>\nstruct Graph\n{\n    vector<vector<Edge>> g;\n    int es;\n\n\
    \    Graph() = default;\n    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t\
    \ size() const { return g.size(); }\n    void add_edge(int from, int to, T cost\
    \ = 1, bool direction = false)\n    {\n        if (direction)\n            g[to].emplace_back(from,\
    \ cost, es);\n        g[from].emplace_back(to, cost, es++);\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: codes/graph/graph_template.hpp
  requiredBy: []
  timestamp: '2023-08-20 15:11:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: codes/graph/graph_template.hpp
layout: document
redirect_from:
- /library/codes/graph/graph_template.hpp
- /library/codes/graph/graph_template.hpp.html
title: codes/graph/graph_template.hpp
---
