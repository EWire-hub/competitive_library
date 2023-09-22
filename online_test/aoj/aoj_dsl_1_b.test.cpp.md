---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.5/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: competitive/date_structure/unionfind/weighted_unionfind.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja\"\
    \n\n#include \"competitive/std/io.hpp\"\n#include \"competitive/std/std.hpp\"\n\
    #include \"competitive/date_structure/unionfind/weighted_unionfind.hpp\"\n\nint\
    \ main() {\n    int n, q;\n    input(n, q);\n\n    WeightedUnionFind<int> uf(n);\n\
    \    while (q--) {\n        int t;\n        input(t);\n        if (t == 0) {\n\
    \            int x, y, z;\n            input(x, y, z);\n            uf.merge(x,\
    \ y, z);\n        } else {\n            int x, y;\n            input(x, y);\n\
    \            if (uf.same(x, y))\n                print(uf.diff(x, y));\n     \
    \       else\n                print('?');\n        }\n    }\n}"
  dependsOn: []
  isVerificationFile: true
  path: online_test/aoj/aoj_dsl_1_b.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: online_test/aoj/aoj_dsl_1_b.test.cpp
layout: document
redirect_from:
- /verify/online_test/aoj/aoj_dsl_1_b.test.cpp
- /verify/online_test/aoj/aoj_dsl_1_b.test.cpp.html
title: online_test/aoj/aoj_dsl_1_b.test.cpp
---
