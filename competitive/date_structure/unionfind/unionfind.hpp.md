---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/aoj/aoj_dsl_1_a.test.cpp
    title: online_test/aoj/aoj_dsl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/library_checker/yosupo_unionfind.test.cpp
    title: online_test/library_checker/yosupo_unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"competitive/date_structure/unionfind/unionfind.hpp\"\n\n\
    struct UnionFind {\n    vector<int> par;\n\n    UnionFind() = default;\n    UnionFind(int\
    \ n) : par(n, -1) {}\n    void init(int n) { par.assign(n, -1); }\n\n    int root(int\
    \ x) {\n        if(par[x] < 0) return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    bool same(int x, int y){return root(x) == root(y);}\n\n    bool\
    \ merge(int x, int y){\n        x = root(x), y = root(y);\n        if(x == y)\
    \ return false;\n        if(par[x] > par[y]) swap(x, y);\n        par[x] += par[y];\n\
    \        par[y] = x;\n        return true;\n    }\n\n    int size(int x){\n  \
    \      return -par[root(x)];\n    }\n\n    vector<std::vector<int>> groups() {\n\
    \        int n = par.size();\n        vector<vector<int>> res(n);\n        for(int\
    \ i = 0; i< n; i++){\n            res[root(i)].emplace_back(i);\n        }\n \
    \       res.erase(remove_if(res.begin(), res.end(), [&](vector<int> &v){\n   \
    \         return v.empty();\n        }), res.end());\n    }\n};\n"
  code: "#pragma once\n\nstruct UnionFind {\n    vector<int> par;\n\n    UnionFind()\
    \ = default;\n    UnionFind(int n) : par(n, -1) {}\n    void init(int n) { par.assign(n,\
    \ -1); }\n\n    int root(int x) {\n        if(par[x] < 0) return x;\n        return\
    \ par[x] = root(par[x]);\n    }\n\n    bool same(int x, int y){return root(x)\
    \ == root(y);}\n\n    bool merge(int x, int y){\n        x = root(x), y = root(y);\n\
    \        if(x == y) return false;\n        if(par[x] > par[y]) swap(x, y);\n \
    \       par[x] += par[y];\n        par[y] = x;\n        return true;\n    }\n\n\
    \    int size(int x){\n        return -par[root(x)];\n    }\n\n    vector<std::vector<int>>\
    \ groups() {\n        int n = par.size();\n        vector<vector<int>> res(n);\n\
    \        for(int i = 0; i< n; i++){\n            res[root(i)].emplace_back(i);\n\
    \        }\n        res.erase(remove_if(res.begin(), res.end(), [&](vector<int>\
    \ &v){\n            return v.empty();\n        }), res.end());\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/date_structure/unionfind/unionfind.hpp
  requiredBy: []
  timestamp: '2023-09-17 12:35:03+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/aoj/aoj_dsl_1_a.test.cpp
  - online_test/library_checker/yosupo_unionfind.test.cpp
documentation_of: competitive/date_structure/unionfind/unionfind.hpp
layout: document
redirect_from:
- /library/competitive/date_structure/unionfind/unionfind.hpp
- /library/competitive/date_structure/unionfind/unionfind.hpp.html
title: competitive/date_structure/unionfind/unionfind.hpp
---
