---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/convert_base.md
    document_title: "Convert Base (\u9032\u6570\u5909\u63DB)"
    links: []
  bundledCode: "#line 2 \"competitive/math/number_theory/convert_base.hpp\"\n\n/**\n\
    \ * @brief Convert Base (\u9032\u6570\u5909\u63DB)\n * @docs docs/convert_base.md\n\
    \ */\n\ntemplate <typename T = long long>\nvector<T> convert_base(T x, T b) {\n\
    \    vector<T> res;\n    while (x) {\n        res.push_back(x % abs(b));\n   \
    \     if (res.back() < 0) res.back() += abs(b);\n        x -= res.back();\n  \
    \      x /= b;\n    }\n    return res;\n}\n"
  code: "#pragma once\n\n/**\n * @brief Convert Base (\u9032\u6570\u5909\u63DB)\n\
    \ * @docs docs/convert_base.md\n */\n\ntemplate <typename T = long long>\nvector<T>\
    \ convert_base(T x, T b) {\n    vector<T> res;\n    while (x) {\n        res.push_back(x\
    \ % abs(b));\n        if (res.back() < 0) res.back() += abs(b);\n        x -=\
    \ res.back();\n        x /= b;\n    }\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: competitive/math/number_theory/convert_base.hpp
  requiredBy: []
  timestamp: '2023-09-08 11:12:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/math/number_theory/convert_base.hpp
layout: document
redirect_from:
- /library/competitive/math/number_theory/convert_base.hpp
- /library/competitive/math/number_theory/convert_base.hpp.html
title: "Convert Base (\u9032\u6570\u5909\u63DB)"
---
