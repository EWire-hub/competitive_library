---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/AOJ/aoj_alds_1_1_c.test.cpp
    title: online_test/AOJ/aoj_alds_1_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"competitive/math/number_theory/is_prime.hpp\"\nbool is_prime(long\
    \ long x){\n    if(x <= 1) return false;\n    for(long long i = 2; i * i <= x;\
    \ i++){\n        if(x % i == 0) return false;\n    }\n    return true;\n}\n"
  code: "bool is_prime(long long x){\n    if(x <= 1) return false;\n    for(long long\
    \ i = 2; i * i <= x; i++){\n        if(x % i == 0) return false;\n    }\n    return\
    \ true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/number_theory/is_prime.hpp
  requiredBy: []
  timestamp: '2023-09-06 16:52:30+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/AOJ/aoj_alds_1_1_c.test.cpp
documentation_of: competitive/math/number_theory/is_prime.hpp
layout: document
title: Is Prime
---

# is_prime

```
bool is_prime(long long x)
```

$x$が素数なら`true`、そうでなければ`false`を返す。

## 制約
- $0 \le x$

## 計算量
- $O(\sqrt(x))$