---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/date_structure/unionfind/unionfind.hpp
    title: competitive/date_structure/unionfind/unionfind.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp
  bundledCode: "#line 1 \"online_test/aoj/aoj_dsl_1_a.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp\"\
    \n\n#line 2 \"competitive/std/std.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n// type name\nusing lint = long long;\nusing ld = long double;\nusing\
    \ PII = pair<int, int>;\nusing PLL = pair<lint, lint>;\nusing VI = vector<int>;\n\
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
    \ (b < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n}\n#line\
    \ 3 \"competitive/std/io.hpp\"\n\n// input\ntemplate <class T>\nistream &operator>>(istream\
    \ &is, vector<T> &v) {\n    for (T &in : v) is >> in;\n    return is;\n}\ntemplate\
    \ <class T, class S>\nistream &operator>>(istream &is, pair<T, S> &p) {\n    is\
    \ >> p.first >> p.second;\n    return is;\n}\ntemplate <class... T>\nvoid input(T\
    \ &...a) {\n    (cin >> ... >> a);\n}\n\n// output\ntemplate <class T>\nostream\
    \ &operator<<(ostream &os, const vector<T> &v) {\n    for (int i = 0; i < (int)v.size();\
    \ i++) os << (i == 0 ? \"\" : \" \") << v[i];\n    return os;\n}\ntemplate <class\
    \ T, class S>\nostream &operator<<(ostream &os, const pair<T, S> &p) {\n    os\
    \ << p.first << \" \" << p.second;\n    return os;\n}\ntemplate <class T, class\
    \ S>\nostream &operator<<(ostream &os, const map<T, S> &mp) {\n    for (auto &[key,\
    \ val] : mp) os << key << \":\" << val << \" \";\n    return os;\n}\ntemplate\
    \ <class T>\nostream &operator<<(ostream &os, const set<T> &st) {\n    for (auto\
    \ itr = st.begin(); itr != st.end(); itr++)\n        os << (itr == st.begin()\
    \ ? \"\" : \" \") << *itr;\n    return os;\n}\ntemplate <class T>\nostream &operator<<(ostream\
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
    n';\n}\n#line 2 \"competitive/date_structure/unionfind/unionfind.hpp\"\n\nstruct\
    \ UnionFind {\n    vector<int> par;\n\n    UnionFind() = default;\n    UnionFind(int\
    \ n) : par(n, -1) {}\n    void init(int n) { par.assign(n, -1); }\n\n    int root(int\
    \ x) {\n        if(par[x] < 0) return x;\n        return par[x] = root(par[x]);\n\
    \    }\n\n    bool same(int x, int y){return root(x) == root(y);}\n\n    bool\
    \ merge(int x, int y){\n        x = root(x), y = root(y);\n        if(x == y)\
    \ return false;\n        if(par[x] > par[y]) swap(x, y);\n        par[x] += par[y];\n\
    \        par[y] = x;\n        return true;\n    }\n\n    int size(int x){\n  \
    \      return -par[root(x)];\n    }\n\n    vector<std::vector<int>> groups() {\n\
    \        int n = par.size();\n        vector<vector<int>> res(n);\n        for(int\
    \ i = 0; i< n; i++){\n            res[root(i)].emplace_back(i);\n        }\n \
    \       res.erase(remove_if(res.begin(), res.end(), [&](vector<int> &v){\n   \
    \         return v.empty();\n        }), res.end());\n    }\n};\n#line 6 \"online_test/aoj/aoj_dsl_1_a.test.cpp\"\
    \n\nint main() {\n    int n, q; input(n, q);\n    UnionFind uf(n);\n    rep(i,\
    \ q){\n        int c, x, y; input(c, x, y);\n        if(c == 0) uf.merge(x, y);\n\
    \        else {\n            print(uf.same(x, y));\n        }\n    }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp\"\
    \n\n#include \"competitive/std/std.hpp\"\n#include \"competitive/std/io.hpp\"\n\
    #include \"competitive/date_structure/unionfind/unionfind.hpp\"\n\nint main()\
    \ {\n    int n, q; input(n, q);\n    UnionFind uf(n);\n    rep(i, q){\n      \
    \  int c, x, y; input(c, x, y);\n        if(c == 0) uf.merge(x, y);\n        else\
    \ {\n            print(uf.same(x, y));\n        }\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/std/io.hpp
  - competitive/date_structure/unionfind/unionfind.hpp
  isVerificationFile: true
  path: online_test/aoj/aoj_dsl_1_a.test.cpp
  requiredBy: []
  timestamp: '2023-09-17 13:08:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/aoj/aoj_dsl_1_a.test.cpp
layout: document
redirect_from:
- /verify/online_test/aoj/aoj_dsl_1_a.test.cpp
- /verify/online_test/aoj/aoj_dsl_1_a.test.cpp.html
title: online_test/aoj/aoj_dsl_1_a.test.cpp
---
