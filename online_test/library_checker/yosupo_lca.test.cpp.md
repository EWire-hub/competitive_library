---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/graph/graph_template.hpp
    title: "Graph Template(\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  - icon: ':heavy_check_mark:'
    path: competitive/graph/tree/doubling_lowest_common_ancestor.hpp
    title: "Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\u5148)"
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
    PROBLEM: https://judge.yosupo.jp/problem/lca
    links:
    - https://judge.yosupo.jp/problem/lca
  bundledCode: "#line 1 \"online_test/library_checker/yosupo_lca.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/lca\"\n\n#line 2 \"competitive/std/std.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n// type name\nusing lint =\
    \ long long;\nusing ld = long double;\nusing PII = pair<int, int>;\nusing PLL\
    \ = pair<lint, lint>;\nusing VI = vector<int>;\nusing VVI = vector<VI>;\nusing\
    \ VVVI = vector<VVI>;\nusing VLL = vector<lint>;\nusing VVLL = vector<VLL>;\n\
    using VVVLL = vector<VVLL>;\nusing VB = vector<bool>;\nusing VVB = vector<VB>;\n\
    using VVVB = vector<VVB>;\nusing VLD = vector<ld>;\nusing VVLD = vector<VLD>;\n\
    using VVVLD = vector<VVLD>;\nusing VPII = vector<PII>;\nusing VVPII = vector<VPII>;\n\
    using VPLL = vector<PLL>;\nusing VVPLL = vector<VPLL>;\nusing VS = vector<string>;\n\
    using VVS = vector<VS>;\nusing VC = vector<char>;\ntemplate <class T>\nusing PQ_max\
    \ = priority_queue<T>;\ntemplate <class T>\nusing PQ_min = priority_queue<T, vector<T>,\
    \ greater<T>>;\n\n// constant\nconstexpr ld EPS = 1e-10;\nconst ld PI = acosl(-1.0);\n\
    constexpr int INF = 1e9;\nconstexpr lint LINF = 1e18;\n\n// macro\n#define _overload3(_1,\
    \ _2, _3, name, ...) name\n#define _rep(i, n) repi(i, 0, n)\n#define repi(i, a,\
    \ b) for (int i = int(a); i < int(b); ++i)\n#define rep(...) _overload3(__VA_ARGS__,\
    \ repi, _rep, )(__VA_ARGS__)\n#define _overload3(_1, _2, _3, name, ...) name\n\
    #define _rrep(i, n) rrepi(i, n, 0)\n#define rrepi(i, a, b) for (int i = int(a\
    \ - 1); i >= int(b); --i)\n#define rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep)(__VA_ARGS__)\n\
    #define all(x) (x).begin(), (x).end()\n\n// function\ntemplate <class T>\nbool\
    \ chmax(T &a, const T &b) {\n    if (a < b) {\n        a = b;\n        return\
    \ 1;\n    }\n    return 0;\n}\ntemplate <class T>\nbool chmin(T &a, const T &b)\
    \ {\n    if (b < a) {\n        a = b;\n        return 1;\n    }\n    return 0;\n\
    }\n#line 3 \"competitive/std/io.hpp\"\n\n// input\ntemplate <class T>\nistream\
    \ &operator>>(istream &is, vector<T> &v) {\n    for (T &in : v) is >> in;\n  \
    \  return is;\n}\ntemplate <class T, class S>\nistream &operator>>(istream &is,\
    \ pair<T, S> &p) {\n    is >> p.first >> p.second;\n    return is;\n}\ntemplate\
    \ <class... T>\nvoid input(T &...a) {\n    (cin >> ... >> a);\n}\n\n// output\n\
    template <class T>\nostream &operator<<(ostream &os, const vector<T> &v) {\n \
    \   for (int i = 0; i < (int)v.size(); i++) os << (i == 0 ? \"\" : \" \") << v[i];\n\
    \    return os;\n}\ntemplate <class T, class S>\nostream &operator<<(ostream &os,\
    \ const pair<T, S> &p) {\n    os << p.first << \" \" << p.second;\n    return\
    \ os;\n}\ntemplate <class T, class S>\nostream &operator<<(ostream &os, const\
    \ map<T, S> &mp) {\n    for (auto &[key, val] : mp) os << key << \":\" << val\
    \ << \" \";\n    return os;\n}\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, const set<T> &st) {\n    for (auto itr = st.begin(); itr != st.end(); itr++)\n\
    \        os << (itr == st.begin() ? \"\" : \" \") << *itr;\n    return os;\n}\n\
    template <class T>\nostream &operator<<(ostream &os, const multiset<T> &st) {\n\
    \    for (auto itr = st.begin(); itr != st.end(); itr++)\n        os << (itr ==\
    \ st.begin() ? \"\" : \" \") << *itr;\n    return os;\n}\ntemplate <class T>\n\
    ostream &operator<<(ostream &os, queue<T> que) {\n    while (!que.empty()) {\n\
    \        os << que.front();\n        que.pop();\n        if (!que.empty()) os\
    \ << \" \";\n    }\n    return os;\n}\ntemplate <class T>\nostream &operator<<(ostream\
    \ &os, stack<T> st) {\n    while (!st.empty()) {\n        os << st.top();\n  \
    \      st.pop();\n        if (!st.empty()) os << \" \";\n    }\n    return os;\n\
    }\ntemplate <class T, class Container, class Compare>\nostream &operator<<(ostream\
    \ &os, priority_queue<T, Container, Compare> pq) {\n    while (!pq.empty()) {\n\
    \        os << pq.top();\n        pq.pop();\n        if (!pq.empty()) os << \"\
    \ \";\n    }\n    return os;\n}\nvoid print() { cout << \"\\n\"; }\ntemplate <class\
    \ T>\nvoid print(const T &a) {\n    cout << a << '\\n';\n}\ntemplate <class T,\
    \ class... Ts>\nvoid print(const T &a, const Ts &...b) {\n    cout << a;\n   \
    \ (..., (cout << ' ' << b));\n    cout << '\\n';\n}\n#line 2 \"competitive/graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\n#line 2 \"competitive/graph/graph_template.hpp\"\n\n/**\n * @brief Graph Template(\u30B0\
    \u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)\n */\n\ntemplate <class T =\
    \ long long>\nstruct Edge {\n    int to;\n    T cost;\n    int idx;\n\n    Edge()\
    \ = default;\n    Edge(int to, T cost = 1, int idx = -1) : to(to), cost(cost),\
    \ idx(idx) {}\n};\n\ntemplate <class T = long long>\nstruct Graph {\n    vector<vector<Edge<T>>>\
    \ g;\n    int es;\n\n    Graph() = default;\n    explicit Graph(int n) : g(n),\
    \ es(0) {}\n\n    size_t size() const { return g.size(); }\n    void add_edge(int\
    \ from, int to, T cost = 1, bool direction = false) {\n        if (!direction)\
    \ g[to].emplace_back(from, cost, es);\n        g[from].emplace_back(to, cost,\
    \ es++);\n    }\n\n    inline vector<Edge<T>> &operator[](const int &k) { return\
    \ g[k]; }\n\n    inline const vector<Edge<T>> &operator[](const int &k) const\
    \ {\n        return g[k];\n    }\n};\n#line 4 \"competitive/graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\n/**\n * @brief Doubling Lowest Common Ancestor (\u6700\u5C0F\u5171\u901A\u7956\
    \u5148)\n * @docs docs/doubling_lowest_common_ancestor.md\n */\n\ntemplate <typename\
    \ T>\nstruct DoublingLowestCommonAncestor : Graph<T> {\n    vector<vector<int>>\
    \ parent;\n    vector<int> depth;\n\n    DoublingLowestCommonAncestor() {}\n \
    \   DoublingLowestCommonAncestor(const Graph<T> &G, int r = 0) { init(G, r); }\n\
    \n    void init(const Graph<T> &G, int r = 0) {\n        int V = (int)G.size();\n\
    \        int h = 1;\n        while ((1 << h) < V) h++;\n        parent.assign(h,\
    \ vector<int>(V, -1));\n        depth.assign(V, -1);\n        dfs(G, r, -1, 0);\n\
    \        for (int i = 0; i + 1 < (int)parent.size(); i++)\n            for (int\
    \ v = 0; v < V; v++)\n                if (parent[i][v] != -1)\n              \
    \      parent[i + 1][v] = parent[i][parent[i][v]];\n    }\n\n    void dfs(const\
    \ Graph<T> &G, int v, int p, int d) {\n        parent[0][v] = p;\n        depth[v]\
    \ = d;\n        for (auto nv : G[v])\n            if (nv.to != p) dfs(G, nv.to,\
    \ v, d + 1);\n    }\n\n    int get_lca(int u, int v) {\n        if (depth[u] >\
    \ depth[v]) swap(u, v);\n        for (int i = 0; i < (int)parent.size(); i++)\n\
    \            if ((depth[v] - depth[u]) & (1 << i)) v = parent[i][v];\n       \
    \ if (u == v) return u;\n        for (int i = (int)parent.size() - 1; i >= 0;\
    \ i--) {\n            if (parent[i][u] != parent[i][v]) {\n                u =\
    \ parent[i][u];\n                v = parent[i][v];\n            }\n        }\n\
    \        return parent[0][u];\n    }\n\n    int get_dist(int u, int v) {\n   \
    \     return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];\n    }\n\n    bool\
    \ is_on_path(int u, int v, int x) {\n        return get_dist(u, x) + get_dist(x,\
    \ v) == get_dist(u, v);\n    }\n\n    int climb(int u, int k) {\n        if (depth[u]\
    \ < k) return -1;\n        for (int i = (int)parent.size() - 1; i >= 0; i--)\n\
    \            if ((k >> i) & 1) u = parent[i][u];\n        return u;\n    }\n};\n\
    #line 6 \"online_test/library_checker/yosupo_lca.test.cpp\"\n\nint main(){\n \
    \   int N, Q; input(N, Q);\n\n    Graph<int> G(N);\n    rep(i, 1, N){\n      \
    \  int p; input(p);\n        G.add_edge(i, p);\n    }\n\n    DoublingLowestCommonAncestor\
    \ lca(G);\n    rep(i, Q){\n        int u, v; input(u, v);\n        print(lca.get_lca(u,\
    \ v));\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/lca\"\n\n#include \"competitive/std/std.hpp\"\
    \n#include \"competitive/std/io.hpp\"\n#include \"competitive/graph/tree/doubling_lowest_common_ancestor.hpp\"\
    \n\nint main(){\n    int N, Q; input(N, Q);\n\n    Graph<int> G(N);\n    rep(i,\
    \ 1, N){\n        int p; input(p);\n        G.add_edge(i, p);\n    }\n\n    DoublingLowestCommonAncestor\
    \ lca(G);\n    rep(i, Q){\n        int u, v; input(u, v);\n        print(lca.get_lca(u,\
    \ v));\n    }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/std/io.hpp
  - competitive/graph/tree/doubling_lowest_common_ancestor.hpp
  - competitive/graph/graph_template.hpp
  isVerificationFile: true
  path: online_test/library_checker/yosupo_lca.test.cpp
  requiredBy: []
  timestamp: '2023-09-17 13:08:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/library_checker/yosupo_lca.test.cpp
layout: document
redirect_from:
- /verify/online_test/library_checker/yosupo_lca.test.cpp
- /verify/online_test/library_checker/yosupo_lca.test.cpp.html
title: online_test/library_checker/yosupo_lca.test.cpp
---
