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
  bundledCode: "#line 1 \"competitive/math/number_theory/is_prime.hpp\"\nbool is_prime(long\
    \ long x){\n    for(long long i = 2; i * i <= x; i++){\n        if(x % i == 0)\
    \ return false;\n    }\n    return true;\n}\n"
  code: "bool is_prime(long long x){\n    for(long long i = 2; i * i <= x; i++){\n\
    \        if(x % i == 0) return false;\n    }\n    return true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/number_theory/is_prime.hpp
  requiredBy: []
  timestamp: '2023-09-06 16:38:40+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/number_theory/is_prime.hpp
layout: document
redirect_from:
- /library/competitive/math/number_theory/is_prime.hpp
- /library/competitive/math/number_theory/is_prime.hpp.html
title: competitive/math/number_theory/is_prime.hpp
---
