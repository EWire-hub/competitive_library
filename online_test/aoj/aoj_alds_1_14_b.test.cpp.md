---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: competitive/std/io.hpp
    title: competitive/std/io.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/std/std.hpp
    title: competitive/std/std.hpp
  - icon: ':heavy_check_mark:'
    path: competitive/string/rolling_hash.hpp
    title: "Rolling Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\u30E5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B
  bundledCode: "#line 1 \"online_test/aoj/aoj_alds_1_14_b.test.cpp\"\n// clang-format\
    \ off\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B\"\
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
    n';\n}\n#line 2 \"competitive/string/rolling_hash.hpp\"\n\n/**\n * @brief Rolling\
    \ Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\u30E5)\n * @see https://qiita.com/keymoon/items/11fac5627672a6d6a9f6\n\
    \ * @doc docs/string/rolling_hash.md\n */\n\nstruct RollingHash {\n    vector<unsigned\
    \ long long> power;\n    const unsigned long long base;\n\n    static inline unsigned\
    \ long long AddMod(unsigned long long l,\n                                   \
    \         unsigned long long r) {\n        if ((l += r) >= MOD) l -= MOD;\n  \
    \      return l;\n    }\n\n    static inline unsigned long long MulMod(unsigned\
    \ long long l,\n                                            unsigned long long\
    \ r) {\n        unsigned long long lu = l >> 31, ld = l & MASK31;\n        unsigned\
    \ long long ru = r >> 31, rd = r & MASK31;\n        unsigned long long m = ld\
    \ * ru + lu * rd;\n        unsigned long long res =\n            ((lu * ru) <<\
    \ 1) + ld * rd + ((m & MASK30) << 31) + (m >> 30);\n        res = (res & MOD)\
    \ + (res >> 61);\n        if (res >= MOD) res -= MOD;\n        return res;\n \
    \   }\n\n    static inline unsigned long long generate_base() {\n        mt19937_64\
    \ mt(chrono::steady_clock::now().time_since_epoch().count());\n        uniform_int_distribution<unsigned\
    \ long long> rand(2,\n                                                       \
    \   RollingHash::MOD - 1);\n        return rand(mt);\n    }\n\n    inline void\
    \ expand(int sz) {\n        if (power.size() < sz + 1) {\n            int pre_sz\
    \ = power.size();\n            power.resize(sz + 1);\n            for (int i =\
    \ pre_sz - 1; i < sz; i++) {\n                power[i + 1] = MulMod(power[i],\
    \ base);\n            }\n        }\n    }\n\n    explicit RollingHash(unsigned\
    \ long long base = generate_base())\n        : base(base), power{1} {}\n\n   \
    \ vector<unsigned long long> build(const string &s) const {\n        int sz =\
    \ s.size();\n        vector<unsigned long long> hashed(sz + 1);\n        for (int\
    \ i = 0; i < sz; i++) {\n            hashed[i + 1] = AddMod(MulMod(hashed[i],\
    \ base), s[i]);\n        }\n        return hashed;\n    }\n\n    template <typename\
    \ T>\n    vector<unsigned long long> build(const vector<T> &s) const {\n     \
    \   int sz = s.size();\n        vector<unsigned long long> hashed(sz + 1);\n \
    \       for (int i = 0; i < sz; i++) {\n            hashed[i + 1] = AddMod(MulMod(hashed[i],\
    \ base), s[i]);\n        }\n        return hashed;\n    }\n\n    unsigned long\
    \ long substr(const vector<unsigned long long> &s, int l,\n                  \
    \            int r) {\n        expand(r - l);\n        return AddMod(s[r], MOD\
    \ - MulMod(s[l], power[r - l]));\n    }\n\n    unsigned long long combine(unsigned\
    \ long long h1, unsigned long long h2,\n                               int h2len)\
    \ {\n        expand(h2len);\n        return AddMod(MulMod(h1, power[h2len]), h2);\n\
    \    }\n\n    int lcp(const vector<unsigned long long> &a, int l1, int r1,\n \
    \           const vector<unsigned long long> &b, int l2, int r2) {\n        int\
    \ len = min(r1 - l1, r2 - l2);\n        int low = 0, high = len + 1;\n       \
    \ while (high - low > 1) {\n            int mid = (low + high) / 2;\n        \
    \    if (substr(a, l1, l1 + mid) == substr(b, l2, l2 + mid))\n               \
    \ low = mid;\n            else\n                high = mid;\n        }\n     \
    \   return low;\n    }\n\n   private:\n    static const unsigned long long MOD\
    \ = (1LL << 61) - 1;\n    static const unsigned long long MASK30 = (1LL << 30)\
    \ - 1;\n    static const unsigned long long MASK31 = (1LL << 31) - 1;\n};\n#line\
    \ 7 \"online_test/aoj/aoj_alds_1_14_b.test.cpp\"\n\n// clang-format off\nint main()\
    \ {\n    string T, P;\n    input(T, P);\n\n    RollingHash roliha;\n    auto h1\
    \ = roliha.build(T);\n    auto h2 = roliha.build(P);\n    for (int i = 0; i +\
    \ P.size() <= T.size(); i++) {\n        if (roliha.substr(h1, i, i + P.size())\
    \ ==\n            roliha.substr(h2, 0, P.size()))\n            print(i);\n   \
    \ }\n}\n"
  code: "// clang-format off\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B\"\
    \n\n#include \"competitive/std/std.hpp\"\n#include \"competitive/std/io.hpp\"\n\
    #include \"competitive/string/rolling_hash.hpp\"\n\n// clang-format off\nint main()\
    \ {\n    string T, P;\n    input(T, P);\n\n    RollingHash roliha;\n    auto h1\
    \ = roliha.build(T);\n    auto h2 = roliha.build(P);\n    for (int i = 0; i +\
    \ P.size() <= T.size(); i++) {\n        if (roliha.substr(h1, i, i + P.size())\
    \ ==\n            roliha.substr(h2, 0, P.size()))\n            print(i);\n   \
    \ }\n}"
  dependsOn:
  - competitive/std/std.hpp
  - competitive/std/io.hpp
  - competitive/string/rolling_hash.hpp
  isVerificationFile: true
  path: online_test/aoj/aoj_alds_1_14_b.test.cpp
  requiredBy: []
  timestamp: '2023-12-03 21:54:06+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: online_test/aoj/aoj_alds_1_14_b.test.cpp
layout: document
redirect_from:
- /verify/online_test/aoj/aoj_alds_1_14_b.test.cpp
- /verify/online_test/aoj/aoj_alds_1_14_b.test.cpp.html
title: online_test/aoj/aoj_alds_1_14_b.test.cpp
---
