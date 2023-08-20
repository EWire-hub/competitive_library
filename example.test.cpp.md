---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
  bundledCode: "#line 1 \"example.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <vector>\n#include<set>\n\
    #define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))\n#define ALL(x) std::begin(x),\
    \ std::end(x)\nusing namespace std;\n\nint main() {\n    int n; cin >> n;\n  \
    \  set<int> s;\n    REP (i, n) {\n        int e; cin >> e; s.insert(e);\n    }\n\
    \    int q; cin >> q;\n    int cnt = 0;\n    while (q --) {\n        int t_i;\
    \ cin >> t_i;\n        cnt += s.count(t_i);\n    }\n    cout << cnt << \"\\n\"\
    ;\n    return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B\"\
    \n#include <algorithm>\n#include <iostream>\n#include <vector>\n#include<set>\n\
    #define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))\n#define ALL(x) std::begin(x),\
    \ std::end(x)\nusing namespace std;\n\nint main() {\n    int n; cin >> n;\n  \
    \  set<int> s;\n    REP (i, n) {\n        int e; cin >> e; s.insert(e);\n    }\n\
    \    int q; cin >> q;\n    int cnt = 0;\n    while (q --) {\n        int t_i;\
    \ cin >> t_i;\n        cnt += s.count(t_i);\n    }\n    cout << cnt << \"\\n\"\
    ;\n    return 0;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: example.test.cpp
  requiredBy: []
  timestamp: '2023-08-20 15:47:40+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: example.test.cpp
layout: document
redirect_from:
- /verify/example.test.cpp
- /verify/example.test.cpp.html
title: example.test.cpp
---
