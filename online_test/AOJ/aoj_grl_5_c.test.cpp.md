---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../std/io.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_C&lang=ja\"\
    \n\n#include \"../std/io.hpp\"\n#include \"../std/std.hpp\"\n#include \"../graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\nint main() {\n    int n;\n    input(n);\n\n    Graph<int> G(n);\n    rep(i,\
    \ n) {\n        int k;\n        input(k);\n        rep(j, k) {\n            int\
    \ c;\n            input(c);\n            G.add_edge(i, c);\n        }\n    }\n\
    \n    DoublingLowestCommonAncestor lca(G);\n\n    int q;\n    input(q);\n    rep(i,\
    \ q) {\n        int u, v;\n        input(u, v);\n        print(lca.get_lca(u,\
    \ v));\n    }\n}"
  dependsOn: []
  isVerificationFile: true
  path: online_test/AOJ/aoj_grl_5_c.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: online_test/AOJ/aoj_grl_5_c.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/aoj_grl_5_c.test.cpp
- /verify/online_test/AOJ/aoj_grl_5_c.test.cpp.html
title: online_test/AOJ/aoj_grl_5_c.test.cpp
---
