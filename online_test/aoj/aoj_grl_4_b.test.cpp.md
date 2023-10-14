---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: competitive/graph/graph_template.hpp
    title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  - icon: ':x:'
    path: competitive/graph/other/topological_sort.hpp
    title: competitive/graph/other/topological_sort.hpp
  - icon: ':question:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':question:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B
  bundledCode: "#line 1 \"online_test/aoj/aoj_grl_4_b.test.cpp\"\n// clang-format\
    \ off\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B\"\
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
    n';\n}\n#line 2 \"competitive/graph/other/topological_sort.hpp\"\n\r\n#line 2\
    \ \"competitive/graph/graph_template.hpp\"\n\n/**\n * @brief Graph Template(\u30B0\
    \u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n * @docs docs/graph/graph_template.md\n\
    \ */\n\ntemplate <class T = long long>\nstruct Edge {\n    int to;\n    T cost;\n\
    \    int idx;\n\n    Edge() = default;\n    Edge(int to, T cost = 1, int idx =\
    \ -1) : to(to), cost(cost), idx(idx) {}\n};\n\ntemplate <class T = long long>\n\
    struct Graph {\n    vector<vector<Edge<T>>> g;\n    int es;\n\n    Graph() = default;\n\
    \    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t size() const { return\
    \ g.size(); }\n    void add_edge(int from, int to, T cost = 1, bool direction\
    \ = false) {\n        if (!direction) g[to].emplace_back(from, cost, es);\n  \
    \      g[from].emplace_back(to, cost, es++);\n    }\n\n    inline vector<Edge<T>>\
    \ &operator[](const int &k) { return g[k]; }\n\n    inline const vector<Edge<T>>\
    \ &operator[](const int &k) const {\n        return g[k];\n    }\n};\n#line 4\
    \ \"competitive/graph/other/topological_sort.hpp\"\n\r\ntemplate <typename T>\r\
    \nvector<int> topological_sort(const Graph<T> &g) {\r\n    int n = g.size();\r\
    \n    vector<int> in(n, 0);\r\n    for (int i = 0; i < n; i++) {\r\n        for\
    \ (auto e : g[i]) {\r\n            in[e.to]++;\r\n        }\r\n    }\r\n\r\n \
    \   queue<int> que;\r\n    for (int i = 0; i < n; i++) {\r\n        if (in[i]\
    \ == 0) que.push(i);\r\n    }\r\n\r\n    vector<int> res;\r\n    while (!que.empty())\
    \ {\r\n        int v = que.front();\r\n        que.pop();\r\n        res.push_back(v);\r\
    \n        for (auto e : g[v]) {\r\n            if (--in[e.to] == 0) que.push(e.to);\r\
    \n        }\r\n    }\r\n\r\n    return res;\r\n}\n#line 7 \"online_test/aoj/aoj_grl_4_b.test.cpp\"\
    \n\n// clang-format on\nint main() {\n    int V, E;\n    input(V, E);\n    Graph\
    \ g(V);\n\n    rep(i, E) {\n        int u, v;\n        input(u, v);\n        g.add_edge(u,\
    \ v, 1, true);\n    }\n\n    VI ans = topological_sort(g);\n    rep(i, V) print(ans[i]);\n\
    }\n"
  code: "// clang-format off\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_4_B\"\
    \n\n#include \"competitive/std/std.hpp\"\n#include \"competitive/std/io.hpp\"\n\
    #include \"competitive/graph/other/topological_sort.hpp\"\n\n// clang-format on\n\
    int main() {\n    int V, E;\n    input(V, E);\n    Graph g(V);\n\n    rep(i, E)\
    \ {\n        int u, v;\n        input(u, v);\n        g.add_edge(u, v, 1, true);\n\
    \    }\n\n    VI ans = topological_sort(g);\n    rep(i, V) print(ans[i]);\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/std/io.hpp
  - competitive/graph/other/topological_sort.hpp
  - competitive/graph/graph_template.hpp
  isVerificationFile: true
  path: online_test/aoj/aoj_grl_4_b.test.cpp
  requiredBy: []
  timestamp: '2023-10-14 20:32:41+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: online_test/aoj/aoj_grl_4_b.test.cpp
layout: document
redirect_from:
- /verify/online_test/aoj/aoj_grl_4_b.test.cpp
- /verify/online_test/aoj/aoj_grl_4_b.test.cpp.html
title: online_test/aoj/aoj_grl_4_b.test.cpp
---
