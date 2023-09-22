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
    _deprecated_at_docs: docs/data_structure/unionfind/unionfind.md
    document_title: Union Find
    links: []
  bundledCode: "#line 2 \"competitive/data_structure/unionfind/unionfind.hpp\"\n\n\
    /**\n * @brief Union Find\n * @docs docs/data_structure/unionfind/unionfind.md\n\
    \ */\n\nstruct UnionFind {\n    vector<int> par;\n\n    UnionFind() = default;\n\
    \    UnionFind(int n) : par(n, -1) {}\n\n    int root(int x) {\n        if (par[x]\
    \ < 0) return x;\n        return par[x] = root(par[x]);\n    }\n\n    bool same(int\
    \ x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int y) {\n\
    \        x = root(x), y = root(y);\n        if (x == y) return false;\n      \
    \  if (par[x] > par[y]) swap(x, y);\n        par[x] += par[y];\n        par[y]\
    \ = x;\n        return true;\n    }\n\n    int size(int x) { return -par[root(x)];\
    \ }\n\n    vector<vector<int>> groups() {\n        int n = (int)par.size();\n\
    \        vector<vector<int>> res(n);\n        for (int i = 0; i < n; i++) {\n\
    \            res[root(i)].emplace_back(i);\n        }\n        res.erase(remove_if(res.begin(),\
    \ res.end(),\n                            [&](vector<int> &v) { return v.empty();\
    \ }),\n                  res.end());\n        return res;\n    }\n};\n"
  code: "#pragma once\n\n/**\n * @brief Union Find\n * @docs docs/data_structure/unionfind/unionfind.md\n\
    \ */\n\nstruct UnionFind {\n    vector<int> par;\n\n    UnionFind() = default;\n\
    \    UnionFind(int n) : par(n, -1) {}\n\n    int root(int x) {\n        if (par[x]\
    \ < 0) return x;\n        return par[x] = root(par[x]);\n    }\n\n    bool same(int\
    \ x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int y) {\n\
    \        x = root(x), y = root(y);\n        if (x == y) return false;\n      \
    \  if (par[x] > par[y]) swap(x, y);\n        par[x] += par[y];\n        par[y]\
    \ = x;\n        return true;\n    }\n\n    int size(int x) { return -par[root(x)];\
    \ }\n\n    vector<vector<int>> groups() {\n        int n = (int)par.size();\n\
    \        vector<vector<int>> res(n);\n        for (int i = 0; i < n; i++) {\n\
    \            res[root(i)].emplace_back(i);\n        }\n        res.erase(remove_if(res.begin(),\
    \ res.end(),\n                            [&](vector<int> &v) { return v.empty();\
    \ }),\n                  res.end());\n        return res;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/data_structure/unionfind/unionfind.hpp
  requiredBy: []
  timestamp: '2023-09-22 12:08:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/aoj/aoj_dsl_1_a.test.cpp
  - online_test/library_checker/yosupo_unionfind.test.cpp
documentation_of: competitive/data_structure/unionfind/unionfind.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/unionfind/unionfind.hpp
- /library/competitive/data_structure/unionfind/unionfind.hpp.html
title: Union Find
---
## 概要
素集合の合併( $x$ が属する集合と $y$ が属する集合をまとめる)，$x,y$ が同じ集合に属するかの判定を高速に行う．

## コンストラクタ
```
UnionFind(int n)
```
$n$ 個の集合を作成する．集合 $i (0\le i <n)$ には要素 $i$ のみが属する．計算量: $O(n)$．

## 関数
- `root(x)`: $x$ が属する集合の代表元を返す．
- `same(x, y)`: $x$ と $y$ が同じ集合に属するかを判定する．
- `merge(x, y)`: $x$ が属する集合と $y$ が属する集合を合併する．$x,y$ がもともと同じ集合に属していたら`false`を返す．
- `size(x)`: $x$ が属する集合の要素数を返す．
- `groups()`: 各集合に含まれる要素を列挙する．集合内の要素は昇順だが，集合の順番は未定義．

## 計算量
- `root(x), same(x, y), merge(x, y), size(x)`: amortized $O(\alpha(n))$
- `groups()`: $O(n)$
