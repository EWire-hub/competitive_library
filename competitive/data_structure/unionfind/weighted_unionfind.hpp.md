---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/data_structure/unionfind/weighted_unionfind.md
    document_title: "\u91CD\u307F\u4ED8\u304D Union Find"
    links: []
  bundledCode: "#line 2 \"competitive/data_structure/unionfind/weighted_unionfind.hpp\"\
    \n\n/**\n * @brief \u91CD\u307F\u4ED8\u304D Union Find\n * @docs docs/data_structure/unionfind/weighted_unionfind.md\n\
    \ */\n\ntemplate <typename T>\nstruct WeightedUnionFind {\n    vector<int> par;\n\
    \    vector<T> diff_weight;\n\n    WeightedUnionFind() = default;\n    WeightedUnionFind(int\
    \ n) : par(n, -1), diff_weight(n, 0) {}\n\n    int root(int x) {\n        if (par[x]\
    \ < 0) return x;\n        int r = root(par[x]);\n        diff_weight[x] += diff_weight[par[x]];\n\
    \        return par[x] = r;\n    }\n\n    T weight(int x) {\n        root(x);\n\
    \        return diff_weight[x];\n    }\n\n    T diff(int x, int y) {\n       \
    \ assert(same(x, y));\n        return weight(y) - weight(x);\n    }\n\n    bool\
    \ same(int x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int\
    \ y, T w) {\n        w += weight(x);\n        w -= weight(y);\n        x = root(x);\n\
    \        y = root(y);\n        if (x == y) return false;\n        if (par[x] >\
    \ par[y]) {\n            swap(x, y);\n            w *= -1;\n        }\n      \
    \  par[x] += par[y];\n        par[y] = x;\n        diff_weight[y] = w;\n     \
    \   return true;\n    }\n};\n"
  code: "#pragma once\n\n/**\n * @brief \u91CD\u307F\u4ED8\u304D Union Find\n * @docs\
    \ docs/data_structure/unionfind/weighted_unionfind.md\n */\n\ntemplate <typename\
    \ T>\nstruct WeightedUnionFind {\n    vector<int> par;\n    vector<T> diff_weight;\n\
    \n    WeightedUnionFind() = default;\n    WeightedUnionFind(int n) : par(n, -1),\
    \ diff_weight(n, 0) {}\n\n    int root(int x) {\n        if (par[x] < 0) return\
    \ x;\n        int r = root(par[x]);\n        diff_weight[x] += diff_weight[par[x]];\n\
    \        return par[x] = r;\n    }\n\n    T weight(int x) {\n        root(x);\n\
    \        return diff_weight[x];\n    }\n\n    T diff(int x, int y) {\n       \
    \ assert(same(x, y));\n        return weight(y) - weight(x);\n    }\n\n    bool\
    \ same(int x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int\
    \ y, T w) {\n        w += weight(x);\n        w -= weight(y);\n        x = root(x);\n\
    \        y = root(y);\n        if (x == y) return false;\n        if (par[x] >\
    \ par[y]) {\n            swap(x, y);\n            w *= -1;\n        }\n      \
    \  par[x] += par[y];\n        par[y] = x;\n        diff_weight[y] = w;\n     \
    \   return true;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/data_structure/unionfind/weighted_unionfind.hpp
  requiredBy: []
  timestamp: '2023-09-22 12:08:10+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/data_structure/unionfind/weighted_unionfind.hpp
layout: document
redirect_from:
- /library/competitive/data_structure/unionfind/weighted_unionfind.hpp
- /library/competitive/data_structure/unionfind/weighted_unionfind.hpp.html
title: "\u91CD\u307F\u4ED8\u304D Union Find"
---
## 概要
- 素集合の合併( $weight(x) + w = weight(y)$ となるように $x$ が属する集合と $y$ が属する集合をまとめる)
- 同じ集合に属する $x,y$ に対し，$weight(y)-weight(x)$ を計算する

というクエリを高速に行う．

## コンストラクタ
```
WeightedUnionFind(int n)
```
$n$ 個の集合を作成する．集合 $i (0\le i <n)$ には要素 $i$ のみが属し，各要素の重みは $0$ である．計算量: $O(n)$．

## 関数
- `root(x)`: $x$ が属する集合の代表元を返す．
- `weight(x)`: $x$ が属する集合の代表元の重みを基準とした時の $x$ の重みを計算する．
- `diff(x, y)`: 同じ集合に属する $x,y$ に対し，$weight(y)-weight(x)$ を返す．$x,y$ が同じ集合に属していない場合はエラーを返す．
- `same(x, y)`: $x$ と $y$ が同じ集合に属するかを判定する．
- `merge(x, y, w)`: $weight(x) + w = weight(y)$ となるように $x$ が属する集合と $y$ が属する集合を合併する．$x,y$ がもともと同じ集合に属していたら`false`を返す．

## 計算量
- `root(x), weight(x), diff(x, y), same(x, y), merge(x, y)`: amortized $O(\alpha(n))$