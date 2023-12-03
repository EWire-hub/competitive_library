---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/data_structure/unionfind/weighted_unionfind.hpp
    title: "\u91CD\u307F\u4ED8\u304D Union Find"
  - icon: ':question:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja
  bundledCode: "#line 1 \"online_test/aoj/aoj_dsl_1_b.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja\"\
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
    n';\n}\n#line 2 \"competitive/data_structure/unionfind/weighted_unionfind.hpp\"\
    \n\n/**\n * @brief \u91CD\u307F\u4ED8\u304D Union Find\n * @docs docs/data_structure/unionfind/weighted_unionfind.md\n\
    \ */\n\ntemplate <typename T>\nstruct WeightedUnionFind {\n    vector<int> par;\n\
    \    vector<T> diff_weight;\n\n    WeightedUnionFind() = default;\n    WeightedUnionFind(int\
    \ n) : par(n, -1), diff_weight(n, 0) {}\n\n    int root(int x) {\n        if (par[x]\
    \ < 0) return x;\n        int r = root(par[x]);\n        diff_weight[x] += diff_weight[par[x]];\n\
    \        return par[x] = r;\n    }\n\n    T weight(int x) {\n        root(x);\n\
    \        return diff_weight[x];\n    }\n\n    T diff(int x, int y) {\n       \
    \ assert(same(x, y));\n        return weight(y) - weight(x);\n    }\n\n    bool\
    \ same(int x, int y) { return root(x) == root(y); }\n\n    bool merge(int x, int\
    \ y, T w) {\n        w += weight(x);\n        w -= weight(y);\n        x = root(x);\n\
    \        y = root(y);\n        if (x == y) return false;\n        if (par[x] >\
    \ par[y]) {\n            swap(x, y);\n            w *= -1;\n        }\n      \
    \  par[x] += par[y];\n        par[y] = x;\n        diff_weight[y] = w;\n     \
    \   return true;\n    }\n};\n#line 6 \"online_test/aoj/aoj_dsl_1_b.test.cpp\"\n\
    \nint main() {\n    int n, q;\n    input(n, q);\n\n    WeightedUnionFind<int>\
    \ uf(n);\n    while (q--) {\n        int t;\n        input(t);\n        if (t\
    \ == 0) {\n            int x, y, z;\n            input(x, y, z);\n           \
    \ uf.merge(x, y, z);\n        } else {\n            int x, y;\n            input(x,\
    \ y);\n            if (uf.same(x, y))\n                print(uf.diff(x, y));\n\
    \            else\n                print('?');\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B&lang=ja\"\
    \n\n#include \"competitive/std/io.hpp\"\n#include \"competitive/std/std.hpp\"\n\
    #include \"competitive/data_structure/unionfind/weighted_unionfind.hpp\"\n\nint\
    \ main() {\n    int n, q;\n    input(n, q);\n\n    WeightedUnionFind<int> uf(n);\n\
    \    while (q--) {\n        int t;\n        input(t);\n        if (t == 0) {\n\
    \            int x, y, z;\n            input(x, y, z);\n            uf.merge(x,\
    \ y, z);\n        } else {\n            int x, y;\n            input(x, y);\n\
    \            if (uf.same(x, y))\n                print(uf.diff(x, y));\n     \
    \       else\n                print('?');\n        }\n    }\n}"
  dependsOn:
  - competitive/std/io.hpp
  - competitive/std/std.hpp
  - competitive/data_structure/unionfind/weighted_unionfind.hpp
  isVerificationFile: true
  path: online_test/aoj/aoj_dsl_1_b.test.cpp
  requiredBy: []
  timestamp: '2023-09-22 12:15:17+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/aoj/aoj_dsl_1_b.test.cpp
layout: document
redirect_from:
- /verify/online_test/aoj/aoj_dsl_1_b.test.cpp
- /verify/online_test/aoj/aoj_dsl_1_b.test.cpp.html
title: online_test/aoj/aoj_dsl_1_b.test.cpp
---
