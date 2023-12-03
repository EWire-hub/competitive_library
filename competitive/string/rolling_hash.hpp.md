---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: online_test/aoj/aoj_alds_1_14_b.test.cpp
    title: online_test/aoj/aoj_alds_1_14_b.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    document_title: "Rolling Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\
      \u30E5)"
    links:
    - https://qiita.com/keymoon/items/11fac5627672a6d6a9f6
  bundledCode: "#line 2 \"competitive/string/rolling_hash.hpp\"\n\n/**\n * @brief\
    \ Rolling Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\u30E5)\n * @see\
    \ https://qiita.com/keymoon/items/11fac5627672a6d6a9f6\n * @doc docs/string/rolling_hash.md\n\
    \ */\n\nstruct RollingHash {\n    vector<unsigned long long> power;\n    const\
    \ unsigned long long base;\n\n    static inline unsigned long long AddMod(unsigned\
    \ long long l,\n                                            unsigned long long\
    \ r) {\n        if ((l += r) >= MOD) l -= MOD;\n        return l;\n    }\n\n \
    \   static inline unsigned long long Mul(unsigned long long l,\n             \
    \                            unsigned long long r) {\n        unsigned long long\
    \ lu = l >> 31, ld = l & MASK31;\n        unsigned long long ru = r >> 31, rd\
    \ = r & MASK31;\n        unsigned long long m = ld * ru + lu * rd;\n        return\
    \ ((lu * ru) << 1) + ld * rd + ((m & MASK30) << 31) + (m >> 30);\n    }\n\n  \
    \  static inline unsigned long long CalcMod(unsigned long long val) {\n      \
    \  val = (val & MOD) + (val >> 61);\n        if (val > MOD) val -= MOD;\n    \
    \    return val;\n    }\n\n    static inline unsigned long long MulMod(unsigned\
    \ long long l,\n                                            unsigned long long\
    \ r) {\n        return CalcMod(Mul(l, r));\n    }\n\n    static inline unsigned\
    \ long long generate_base() {\n        mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());\n\
    \        uniform_int_distribution<unsigned long long> rand(1,\n              \
    \                                            RollingHash::MOD - 1);\n        return\
    \ rand(mt);\n    }\n\n    inline void expand(int sz) {\n        if (power.size()\
    \ < sz + 1) {\n            int pre_sz = power.size();\n            power.resize(sz\
    \ + 1);\n            for (int i = pre_sz - 1; i < sz; i++) {\n               \
    \ power[i + 1] = MulMod(power[i], base);\n            }\n        }\n    }\n\n\
    \    explicit RollingHash(unsigned long long base = generate_base())\n       \
    \ : base(base), power{1} {}\n\n    vector<unsigned long long> build(const string\
    \ &s) const {\n        int sz = s.size();\n        vector<unsigned long long>\
    \ hashed(sz + 1);\n        for (int i = 0; i < sz; i++) {\n            hashed[i\
    \ + 1] = AddMod(Mul(hashed[i], base), s[i]);\n        }\n        return hashed;\n\
    \    }\n\n    template <typename T>\n    vector<unsigned long long> build(const\
    \ vector<T> &s) const {\n        int sz = s.size();\n        vector<unsigned long\
    \ long> hashed(sz + 1);\n        for (int i = 0; i < sz; i++) {\n            hashed[i\
    \ + 1] = AddMod(Mul(hashed[i], base), s[i]);\n        }\n        return hashed;\n\
    \    }\n\n    unsigned long long substr(const vector<unsigned long long> &s, int\
    \ l,\n                              int r) {\n        expand(r - l);\n       \
    \ return AddMod(s[r], MOD - MulMod(s[l], power[r - l]));\n    }\n\n    unsigned\
    \ long long combine(unsigned long long h1, unsigned long long h2,\n          \
    \                     int h2len) {\n        expand(h2len);\n        return AddMod(Mul(h1,\
    \ power[h2len]), h2);\n    }\n\n    int lcp(const vector<unsigned long long> &a,\
    \ int l1, int r1,\n            const vector<unsigned long long> &b, int l2, int\
    \ r2) {\n        int len = min(r1 - l1, r2 - l2);\n        int low = 0, high =\
    \ len + 1;\n        while (high - low > 1) {\n            int mid = (low + high)\
    \ / 2;\n            if (substr(a, l1, l1 + mid) == substr(b, l2, l2 + mid))\n\
    \                low = mid;\n            else\n                high = mid;\n \
    \       }\n        return low;\n    }\n\n   private:\n    static const unsigned\
    \ long long MOD = (1LL << 61) - 1;\n    static const unsigned long long MASK30\
    \ = (1LL << 30) - 1;\n    static const unsigned long long MASK31 = (1LL << 31)\
    \ - 1;\n};\n"
  code: "#pragma once\n\n/**\n * @brief Rolling Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\
    \u30CF\u30C3\u30B7\u30E5)\n * @see https://qiita.com/keymoon/items/11fac5627672a6d6a9f6\n\
    \ * @doc docs/string/rolling_hash.md\n */\n\nstruct RollingHash {\n    vector<unsigned\
    \ long long> power;\n    const unsigned long long base;\n\n    static inline unsigned\
    \ long long AddMod(unsigned long long l,\n                                   \
    \         unsigned long long r) {\n        if ((l += r) >= MOD) l -= MOD;\n  \
    \      return l;\n    }\n\n    static inline unsigned long long Mul(unsigned long\
    \ long l,\n                                         unsigned long long r) {\n\
    \        unsigned long long lu = l >> 31, ld = l & MASK31;\n        unsigned long\
    \ long ru = r >> 31, rd = r & MASK31;\n        unsigned long long m = ld * ru\
    \ + lu * rd;\n        return ((lu * ru) << 1) + ld * rd + ((m & MASK30) << 31)\
    \ + (m >> 30);\n    }\n\n    static inline unsigned long long CalcMod(unsigned\
    \ long long val) {\n        val = (val & MOD) + (val >> 61);\n        if (val\
    \ > MOD) val -= MOD;\n        return val;\n    }\n\n    static inline unsigned\
    \ long long MulMod(unsigned long long l,\n                                   \
    \         unsigned long long r) {\n        return CalcMod(Mul(l, r));\n    }\n\
    \n    static inline unsigned long long generate_base() {\n        mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());\n\
    \        uniform_int_distribution<unsigned long long> rand(1,\n              \
    \                                            RollingHash::MOD - 1);\n        return\
    \ rand(mt);\n    }\n\n    inline void expand(int sz) {\n        if (power.size()\
    \ < sz + 1) {\n            int pre_sz = power.size();\n            power.resize(sz\
    \ + 1);\n            for (int i = pre_sz - 1; i < sz; i++) {\n               \
    \ power[i + 1] = MulMod(power[i], base);\n            }\n        }\n    }\n\n\
    \    explicit RollingHash(unsigned long long base = generate_base())\n       \
    \ : base(base), power{1} {}\n\n    vector<unsigned long long> build(const string\
    \ &s) const {\n        int sz = s.size();\n        vector<unsigned long long>\
    \ hashed(sz + 1);\n        for (int i = 0; i < sz; i++) {\n            hashed[i\
    \ + 1] = AddMod(Mul(hashed[i], base), s[i]);\n        }\n        return hashed;\n\
    \    }\n\n    template <typename T>\n    vector<unsigned long long> build(const\
    \ vector<T> &s) const {\n        int sz = s.size();\n        vector<unsigned long\
    \ long> hashed(sz + 1);\n        for (int i = 0; i < sz; i++) {\n            hashed[i\
    \ + 1] = AddMod(Mul(hashed[i], base), s[i]);\n        }\n        return hashed;\n\
    \    }\n\n    unsigned long long substr(const vector<unsigned long long> &s, int\
    \ l,\n                              int r) {\n        expand(r - l);\n       \
    \ return AddMod(s[r], MOD - MulMod(s[l], power[r - l]));\n    }\n\n    unsigned\
    \ long long combine(unsigned long long h1, unsigned long long h2,\n          \
    \                     int h2len) {\n        expand(h2len);\n        return AddMod(Mul(h1,\
    \ power[h2len]), h2);\n    }\n\n    int lcp(const vector<unsigned long long> &a,\
    \ int l1, int r1,\n            const vector<unsigned long long> &b, int l2, int\
    \ r2) {\n        int len = min(r1 - l1, r2 - l2);\n        int low = 0, high =\
    \ len + 1;\n        while (high - low > 1) {\n            int mid = (low + high)\
    \ / 2;\n            if (substr(a, l1, l1 + mid) == substr(b, l2, l2 + mid))\n\
    \                low = mid;\n            else\n                high = mid;\n \
    \       }\n        return low;\n    }\n\n   private:\n    static const unsigned\
    \ long long MOD = (1LL << 61) - 1;\n    static const unsigned long long MASK30\
    \ = (1LL << 30) - 1;\n    static const unsigned long long MASK31 = (1LL << 31)\
    \ - 1;\n};"
  dependsOn: []
  isVerificationFile: false
  path: competitive/string/rolling_hash.hpp
  requiredBy: []
  timestamp: '2023-12-03 21:35:23+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - online_test/aoj/aoj_alds_1_14_b.test.cpp
documentation_of: competitive/string/rolling_hash.hpp
layout: document
redirect_from:
- /library/competitive/string/rolling_hash.hpp
- /library/competitive/string/rolling_hash.hpp.html
title: "Rolling Hash (\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\u30E5)"
---
