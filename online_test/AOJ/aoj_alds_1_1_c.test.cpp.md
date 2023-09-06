---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/math/number_theory/is_prime.hpp
    title: "Is Prime (\u7D20\u6570\u5224\u5B9A)"
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
  bundledCode: "#line 1 \"online_test/AOJ/aoj_alds_1_1_c.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C\"\n\n#line\
    \ 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n// type name\nusing lint = long long;\nusing ld = long double;\nusing PII =\
    \ pair<int, int>;\nusing PLL = pair<lint, lint>;\nusing VI = vector<int>;\nusing\
    \ VVI = vector<VI>;\nusing VVVI = vector<VVI>;\nusing VLL = vector<lint>;\nusing\
    \ VVLL = vector<VLL>;\nusing VVVLL = vector<VVLL>;\nusing VB = vector<bool>;\n\
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
    \ (x).begin(), (x).end()\n\n// function\ntemplate<class T>bool chmax(T &a, const\
    \ T &b) { if (a<b) { a=b; return 1; } return 0; }\ntemplate<class T>bool chmin(T\
    \ &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }\n#line 3 \"competitive/std/io.hpp\"\
    \n\n// input\ntemplate <class T>\nistream &operator>>(istream &is, vector<T> &v)\
    \ {\n    for (T &in : v) is >> in;\n    return is;\n}\ntemplate <class T, class\
    \ S>\nistream &operator>>(istream &is, pair<T, S> &p) {\n    is >> p.first >>\
    \ p.second;\n    return is;\n}\ntemplate <class... T>\nvoid input(T &...a) {\n\
    \    (cin >> ... >> a);\n}\n\n// output\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const vector<T> &v) {\n    for (int i = 0; i < (int)v.size(); i++) os <<\
    \ (i == 0 ? \"\" : \" \") << v[i];\n    return os;\n}\ntemplate <class T, class\
    \ S>\nostream &operator<<(ostream &os, const pair<T, S> &p) {\n    os << p.first\
    \ << \" \" << p.second;\n    return os;\n}\ntemplate <class T, class S>\nostream\
    \ &operator<<(ostream &os, const map<T, S> &mp) {\n    for (auto &[key, val] :\
    \ mp) os << key << \":\" << val << \" \";\n    return os;\n}\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, const set<T> &st) {\n    for (auto itr\
    \ = st.begin(); itr != st.end(); itr++)\n        os << (itr == st.begin() ? \"\
    \" : \" \") << *itr;\n    return os;\n}\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const multiset<T> &st) {\n    for (auto itr = st.begin(); itr != st.end();\
    \ itr++)\n        os << (itr == st.begin() ? \"\" : \" \") << *itr;\n    return\
    \ os;\n}\ntemplate <class T>\nostream &operator<<(ostream &os, queue<T> que) {\n\
    \    while (!que.empty()) {\n        os << que.front();\n        que.pop();\n\
    \        if (!que.empty()) os << \" \";\n    }\n    return os;\n}\ntemplate <class\
    \ T>\nostream &operator<<(ostream &os, stack<T> st) {\n    while (!st.empty())\
    \ {\n        os << st.top();\n        st.pop();\n        if (!st.empty()) os <<\
    \ \" \";\n    }\n    return os;\n}\ntemplate <class T, class Container, class\
    \ Compare>\nostream &operator<<(ostream &os, priority_queue<T, Container, Compare>\
    \ pq) {\n    while (!pq.empty()) {\n        os << pq.top();\n        pq.pop();\n\
    \        if (!pq.empty()) os << \" \";\n    }\n    return os;\n}\nvoid print()\
    \ { cout << \"\\n\"; }\ntemplate <class T>\nvoid print(const T &a) {\n    cout\
    \ << a << '\\n';\n}\ntemplate <class T, class... Ts>\nvoid print(const T &a, const\
    \ Ts &...b) {\n    cout << a;\n    (..., (cout << ' ' << b));\n    cout << '\\\
    n';\n}\n#line 2 \"competitive/math/number_theory/is_prime.hpp\"\n\nbool is_prime(long\
    \ long x) {\n    if (x <= 1) return false;\n    for (long long i = 2; i * i <=\
    \ x; i++) {\n        if (x % i == 0) return false;\n    }\n    return true;\n\
    }\n#line 6 \"online_test/AOJ/aoj_alds_1_1_c.test.cpp\"\n\nint main() {\n    int\
    \ N; input(N);\n\n    int ans = 0;\n    rep(i, N){\n        int x; input(x);\n\
    \        if(is_prime(x)) ans++;\n    }\n    print(ans);\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C\"\
    \n\n#include \"competitive/std/io.hpp\"\n#include \"competitive/std/std.hpp\"\n\
    #include \"competitive/math/number_theory/is_prime.hpp\"\n\nint main() {\n   \
    \ int N; input(N);\n\n    int ans = 0;\n    rep(i, N){\n        int x; input(x);\n\
    \        if(is_prime(x)) ans++;\n    }\n    print(ans);\n}"
  dependsOn:
  - competitive/std/io.hpp
  - competitive/std/std.hpp
  - competitive/math/number_theory/is_prime.hpp
  isVerificationFile: true
  path: online_test/AOJ/aoj_alds_1_1_c.test.cpp
  requiredBy: []
  timestamp: '2023-09-06 17:22:59+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/AOJ/aoj_alds_1_1_c.test.cpp
layout: document
redirect_from:
- /verify/online_test/AOJ/aoj_alds_1_1_c.test.cpp
- /verify/online_test/AOJ/aoj_alds_1_1_c.test.cpp.html
title: online_test/AOJ/aoj_alds_1_1_c.test.cpp
---
