---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n// type name\nusing lint = long long;\nusing ld = long double;\n\
    using P = pair<lint, lint>;\nusing VI = vector<int>;\nusing VVI = vector<VI>;\n\
    using VVVI = vector<VVI>;\nusing VLL = vector<lint>;\nusing VVLL = vector<VLL>;\n\
    using VVVLL = vector<VVLL>;\nusing VB = vector<bool>;\nusing VVB = vector<VB>;\n\
    using VVVB = vector<VVB>;\nusing VLD = vector<ld>;\nusing VVLD = vector<VLD>;\n\
    using VVVLD = vector<VVLD>;\nusing VP = vector<P>;\nusing VVP = vector<VP>;\n\
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
    \n\n// input\ntemplate<class T>\nistream &operator>>(istream &is, vector<T> &v){\n\
    \    for(T &in : v) is >> in;\n    return is;\n}\ntemplate<class T, class S>\n\
    istream &operator>>(istream &is, pair<T, S> &p){\n    is >> p.first >> p.second;\n\
    \    return is;\n}\ntemplate<class... T> void input(T&... a) {(cin >> ... >> a);}\n\
    \n//output\ntemplate<class T>\nostream & operator<<(ostream &os, const vector<T>\
    \ &v){\n    for(int i = 0; i < (int)v.size(); i++) os << (i == 0 ? \"\" : \" \"\
    ) << v[i];\n    return os;\n}\ntemplate<class T, class S>\nostream &operator<<(ostream\
    \ &os, const pair<T, S> &p){\n    os << p.first << \" \" << p.second;\n    return\
    \ os;\n}\ntemplate<class T, class S>\nostream &operator<<(ostream &os, const map<T,\
    \ S> &mp){\n    for(auto &[key, val] : mp) os << key << \":\" << val << \" \"\
    ;\n    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream &os, const\
    \ set<T> &st){\n    for(auto itr = st.begin(); itr != st.end(); itr++) os << (itr\
    \ == st.begin() ? \"\" : \" \") << *itr;\n    return os;\n}\ntemplate<class T>\n\
    ostream &operator<<(ostream &os, const multiset<T> &st){\n    for(auto itr = st.begin();\
    \ itr != st.end(); itr++) os << (itr == st.begin() ? \"\" : \" \") << *itr;\n\
    \    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream &os, queue<T>\
    \ que){\n    while(!que.empty()) {\n        os << que.front(); que.pop();\n  \
    \      if(!que.empty()) os << \" \";\n    }\n    return os;\n}\ntemplate<class\
    \ T>\nostream &operator<<(ostream &os, stack<T> st){\n    while(!st.empty()) {\n\
    \        os << st.top(); st.pop();\n        if(!st.empty()) os << \" \";\n   \
    \ }\n    return os;\n}\ntemplate <class T, class Container, class Compare>\nostream\
    \ &operator<<(ostream &os, priority_queue<T, Container, Compare> pq)\n{\n    while\
    \ (!pq.empty()){\n        os << pq.top(); pq.pop();\n        if(!pq.empty()) os\
    \ << \" \";\n    }\n    return os;\n}\nvoid print() {cout << \"\\n\";}\ntemplate<class\
    \ T> void print(const T& a) {cout << a << '\\n';}\ntemplate<class T, class...\
    \ Ts> void print(const T& a, const Ts&... b) {cout << a; (..., (cout  << ' ' <<\
    \ b)); cout << '\\n';}\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n\n// input\ntemplate<class\
    \ T>\nistream &operator>>(istream &is, vector<T> &v){\n    for(T &in : v) is >>\
    \ in;\n    return is;\n}\ntemplate<class T, class S>\nistream &operator>>(istream\
    \ &is, pair<T, S> &p){\n    is >> p.first >> p.second;\n    return is;\n}\ntemplate<class...\
    \ T> void input(T&... a) {(cin >> ... >> a);}\n\n//output\ntemplate<class T>\n\
    ostream & operator<<(ostream &os, const vector<T> &v){\n    for(int i = 0; i <\
    \ (int)v.size(); i++) os << (i == 0 ? \"\" : \" \") << v[i];\n    return os;\n\
    }\ntemplate<class T, class S>\nostream &operator<<(ostream &os, const pair<T,\
    \ S> &p){\n    os << p.first << \" \" << p.second;\n    return os;\n}\ntemplate<class\
    \ T, class S>\nostream &operator<<(ostream &os, const map<T, S> &mp){\n    for(auto\
    \ &[key, val] : mp) os << key << \":\" << val << \" \";\n    return os;\n}\ntemplate<class\
    \ T>\nostream &operator<<(ostream &os, const set<T> &st){\n    for(auto itr =\
    \ st.begin(); itr != st.end(); itr++) os << (itr == st.begin() ? \"\" : \" \"\
    ) << *itr;\n    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream\
    \ &os, const multiset<T> &st){\n    for(auto itr = st.begin(); itr != st.end();\
    \ itr++) os << (itr == st.begin() ? \"\" : \" \") << *itr;\n    return os;\n}\n\
    template<class T>\nostream &operator<<(ostream &os, queue<T> que){\n    while(!que.empty())\
    \ {\n        os << que.front(); que.pop();\n        if(!que.empty()) os << \"\
    \ \";\n    }\n    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream\
    \ &os, stack<T> st){\n    while(!st.empty()) {\n        os << st.top(); st.pop();\n\
    \        if(!st.empty()) os << \" \";\n    }\n    return os;\n}\ntemplate <class\
    \ T, class Container, class Compare>\nostream &operator<<(ostream &os, priority_queue<T,\
    \ Container, Compare> pq)\n{\n    while (!pq.empty()){\n        os << pq.top();\
    \ pq.pop();\n        if(!pq.empty()) os << \" \";\n    }\n    return os;\n}\n\
    void print() {cout << \"\\n\";}\ntemplate<class T> void print(const T& a) {cout\
    \ << a << '\\n';}\ntemplate<class T, class... Ts> void print(const T& a, const\
    \ Ts&... b) {cout << a; (..., (cout  << ' ' << b)); cout << '\\n';}"
  dependsOn:
  - competitive/std/std.hpp
  isVerificationFile: false
  path: competitive/std/io.hpp
  requiredBy: []
  timestamp: '2023-08-20 21:04:01+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: competitive/std/io.hpp
layout: document
redirect_from:
- /library/competitive/std/io.hpp
- /library/competitive/std/io.hpp.html
title: competitive/std/io.hpp
---
