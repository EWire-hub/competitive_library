---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/aoj/aoj_dsl_1_b.test.cpp
    title: online_test/aoj/aoj_dsl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/weighted_unionfind.md
    document_title: "\u91CD\u307F\u4ED8\u304D Union Find"
    links: []
  bundledCode: "#line 2 \"competitive/date_structure/unionfind/weighted_unionfind.hpp\"\
    \n\n/**\n * @brief \u91CD\u307F\u4ED8\u304D Union Find\n * @docs docs/weighted_unionfind.md\n\
    \ */\n\ntemplate <typename T>\nstruct WeightedUnionFind {\n    vector<int> par;\n\
    \    vector<T> diff_weight;\n\n    WeightedUnionFind() = default;\n    WeightedUnionFind(int\
    \ n) : par(n, -1), diff_weight(n, 0) {}\n\n    int root(int x) {\n        if (par[x]\
    \ < 0) return x;\n        int r = root(par[x]);\n        diff_weight[x] += diff_weight[par[x]];\n\
    \        return par[x] = r;\n    }\n\n    T weight(int x) {\n        root(x);\n\
    \        return diff_weight[x];\n    }\n\n    T diff(int x, int y) { return weight(y)\
    \ - weight(x); }\n\n    bool same(int x, int y) { return root(x) == root(y); }\n\
    \n    bool merge(int x, int y, T w) {\n        w += weight(x);\n        w -= weight(y);\n\
    \        x = root(x);\n        y = root(y);\n        if (x == y) return false;\n\
    \        if (par[x] > par[y]) {\n            swap(x, y);\n            w *= -1;\n\
    \        }\n        par[x] += par[y];\n        par[y] = x;\n        diff_weight[y]\
    \ = w;\n        return true;\n    }\n\n    int size(int x) { return -par[root(x)];\
    \ }\n};\n"
  code: "#pragma once\n\n/**\n * @brief \u91CD\u307F\u4ED8\u304D Union Find\n * @docs\
    \ docs/weighted_unionfind.md\n */\n\ntemplate <typename T>\nstruct WeightedUnionFind\
    \ {\n    vector<int> par;\n    vector<T> diff_weight;\n\n    WeightedUnionFind()\
    \ = default;\n    WeightedUnionFind(int n) : par(n, -1), diff_weight(n, 0) {}\n\
    \n    int root(int x) {\n        if (par[x] < 0) return x;\n        int r = root(par[x]);\n\
    \        diff_weight[x] += diff_weight[par[x]];\n        return par[x] = r;\n\
    \    }\n\n    T weight(int x) {\n        root(x);\n        return diff_weight[x];\n\
    \    }\n\n    T diff(int x, int y) { return weight(y) - weight(x); }\n\n    bool\
    \ same(int x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int\
    \ y, T w) {\n        w += weight(x);\n        w -= weight(y);\n        x = root(x);\n\
    \        y = root(y);\n        if (x == y) return false;\n        if (par[x] >\
    \ par[y]) {\n            swap(x, y);\n            w *= -1;\n        }\n      \
    \  par[x] += par[y];\n        par[y] = x;\n        diff_weight[y] = w;\n     \
    \   return true;\n    }\n\n    int size(int x) { return -par[root(x)]; }\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/date_structure/unionfind/weighted_unionfind.hpp
  requiredBy: []
  timestamp: '2023-09-17 19:46:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/aoj/aoj_dsl_1_b.test.cpp
documentation_of: competitive/date_structure/unionfind/weighted_unionfind.hpp
layout: document
redirect_from:
- /library/competitive/date_structure/unionfind/weighted_unionfind.hpp
- /library/competitive/date_structure/unionfind/weighted_unionfind.hpp.html
title: "\u91CD\u307F\u4ED8\u304D Union Find"
---
