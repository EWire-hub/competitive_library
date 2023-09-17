---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/aoj_0233.test.cpp
    title: online_test/AOJ/aoj_0233.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/aoj_alds_1_1_c.test.cpp
    title: online_test/AOJ/aoj_alds_1_1_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/aoj_dsl_1_a.test.cpp
    title: online_test/AOJ/aoj_dsl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/aoj_grl_5_c.test.cpp
    title: online_test/AOJ/aoj_grl_5_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/Library Checker/yospo_lca.test.cpp
    title: online_test/Library Checker/yospo_lca.test.cpp
  - icon: ':heavy_check_mark:'
    path: online_test/Library Checker/yosupo_unionfind.test.cpp
    title: online_test/Library Checker/yosupo_unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n// type name\nusing lint = long long;\nusing ld = long double;\n\
    using PII = pair<int, int>;\nusing PLL = pair<lint, lint>;\nusing VI = vector<int>;\n\
    using VVI = vector<VI>;\nusing VVVI = vector<VVI>;\nusing VLL = vector<lint>;\n\
    using VVLL = vector<VLL>;\nusing VVVLL = vector<VVLL>;\nusing VB = vector<bool>;\n\
    using VVB = vector<VB>;\nusing VVVB = vector<VVB>;\nusing VLD = vector<ld>;\n\
    using VVLD = vector<VLD>;\nusing VVVLD = vector<VVLD>;\nusing VPII = vector<PII>;\n\
    using VVPII = vector<VPII>;\nusing VPLL = vector<PLL>;\nusing VVPLL = vector<VPLL>;\n\
    using VS = vector<string>;\nusing VVS = vector<VS>;\nusing VC = vector<char>;\n\
    template <class T>\nusing PQ_max = priority_queue<T>;\ntemplate <class T>\nusing\
    \ PQ_min = priority_queue<T, vector<T>, greater<T>>;\n\n// constant\nconstexpr\
    \ ld EPS = 1e-10;\nconst ld PI = acosl(-1.0);\nconstexpr int INF = 1e9;\nconstexpr\
    \ lint LINF = 1e18;\n\n// macro\n#define _overload3(_1, _2, _3, name, ...) name\n\
    #define _rep(i, n) repi(i, 0, n)\n#define repi(i, a, b) for (int i = int(a); i\
    \ < int(b); ++i)\n#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)\n\
    #define _overload3(_1, _2, _3, name, ...) name\n#define _rrep(i, n) rrepi(i, n,\
    \ 0)\n#define rrepi(i, a, b) for (int i = int(a - 1); i >= int(b); --i)\n#define\
    \ rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep)(__VA_ARGS__)\n#define all(x)\
    \ (x).begin(), (x).end()\n\n// function\ntemplate <class T>\nbool chmax(T &a,\
    \ const T &b) {\n    if (a < b) {\n        a = b;\n        return 1;\n    }\n\
    \    return 0;\n}\ntemplate <class T>\nbool chmin(T &a, const T &b) {\n    if\
    \ (b < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n\n// type name\n\
    using lint = long long;\nusing ld = long double;\nusing PII = pair<int, int>;\n\
    using PLL = pair<lint, lint>;\nusing VI = vector<int>;\nusing VVI = vector<VI>;\n\
    using VVVI = vector<VVI>;\nusing VLL = vector<lint>;\nusing VVLL = vector<VLL>;\n\
    using VVVLL = vector<VVLL>;\nusing VB = vector<bool>;\nusing VVB = vector<VB>;\n\
    using VVVB = vector<VVB>;\nusing VLD = vector<ld>;\nusing VVLD = vector<VLD>;\n\
    using VVVLD = vector<VVLD>;\nusing VPII = vector<PII>;\nusing VVPII = vector<VPII>;\n\
    using VPLL = vector<PLL>;\nusing VVPLL = vector<VPLL>;\nusing VS = vector<string>;\n\
    using VVS = vector<VS>;\nusing VC = vector<char>;\ntemplate <class T>\nusing PQ_max\
    \ = priority_queue<T>;\ntemplate <class T>\nusing PQ_min = priority_queue<T, vector<T>,\
    \ greater<T>>;\n\n// constant\nconstexpr ld EPS = 1e-10;\nconst ld PI = acosl(-1.0);\n\
    constexpr int INF = 1e9;\nconstexpr lint LINF = 1e18;\n\n// macro\n#define _overload3(_1,\
    \ _2, _3, name, ...) name\n#define _rep(i, n) repi(i, 0, n)\n#define repi(i, a,\
    \ b) for (int i = int(a); i < int(b); ++i)\n#define rep(...) _overload3(__VA_ARGS__,\
    \ repi, _rep, )(__VA_ARGS__)\n#define _overload3(_1, _2, _3, name, ...) name\n\
    #define _rrep(i, n) rrepi(i, n, 0)\n#define rrepi(i, a, b) for (int i = int(a\
    \ - 1); i >= int(b); --i)\n#define rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep)(__VA_ARGS__)\n\
    #define all(x) (x).begin(), (x).end()\n\n// function\ntemplate <class T>\nbool\
    \ chmax(T &a, const T &b) {\n    if (a < b) {\n        a = b;\n        return\
    \ 1;\n    }\n    return 0;\n}\ntemplate <class T>\nbool chmin(T &a, const T &b)\
    \ {\n    if (b < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: competitive/std/std.hpp
  requiredBy:
  - competitive/std/io.hpp
  timestamp: '2023-09-08 12:12:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/aoj_grl_5_c.test.cpp
  - online_test/AOJ/aoj_alds_1_1_c.test.cpp
  - online_test/AOJ/aoj_0233.test.cpp
  - online_test/AOJ/aoj_dsl_1_a.test.cpp
  - online_test/Library Checker/yosupo_unionfind.test.cpp
  - online_test/Library Checker/yospo_lca.test.cpp
documentation_of: competitive/std/std.hpp
layout: document
redirect_from:
- /library/competitive/std/std.hpp
- /library/competitive/std/std.hpp.html
title: competitive/std/std.hpp
---
