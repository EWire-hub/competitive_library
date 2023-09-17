---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: online_test/aoj/aoj_0233.test.cpp
    title: online_test/aoj/aoj_0233.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/convert_base.md
    document_title: "Convert Base (\u9032\u6570\u5909\u63DB)"
    links: []
  bundledCode: "#line 2 \"competitive/math/number_theory/convert_base.hpp\"\n\n/**\n\
    \ * @brief Convert Base (\u9032\u6570\u5909\u63DB)\n * @docs docs/convert_base.md\n\
    \ */\n\ntemplate <typename T = long long>\nvector<T> convert_base(T x, T b) {\n\
    \    vector<T> res;\n    while (x) {\n        res.push_back(x % abs(b));\n   \
    \     if (res.back() < 0) res.back() += abs(b);\n        x -= res.back();\n  \
    \      x /= b;\n    }\n    if (res.empty()) res.push_back(0);\n    reverse(res.begin(),\
    \ res.end());\n    return res;\n}\n"
  code: "#pragma once\n\n/**\n * @brief Convert Base (\u9032\u6570\u5909\u63DB)\n\
    \ * @docs docs/convert_base.md\n */\n\ntemplate <typename T = long long>\nvector<T>\
    \ convert_base(T x, T b) {\n    vector<T> res;\n    while (x) {\n        res.push_back(x\
    \ % abs(b));\n        if (res.back() < 0) res.back() += abs(b);\n        x -=\
    \ res.back();\n        x /= b;\n    }\n    if (res.empty()) res.push_back(0);\n\
    \    reverse(res.begin(), res.end());\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/number_theory/convert_base.hpp
  requiredBy: []
  timestamp: '2023-09-08 12:12:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - online_test/aoj/aoj_0233.test.cpp
documentation_of: competitive/math/number_theory/convert_base.hpp
layout: document
redirect_from:
- /library/competitive/math/number_theory/convert_base.hpp
- /library/competitive/math/number_theory/convert_base.hpp.html
title: "Convert Base (\u9032\u6570\u5909\u63DB)"
---
# convert_base
```
vector<T> convert_base(T x, T b)
```
10進数 $x$ を $b$ 進数に変換した結果を返す。

## 計算量
- $O(\log_b x)$