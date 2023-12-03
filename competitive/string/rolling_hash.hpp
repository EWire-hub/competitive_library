#pragma once

/**
 * @brief Rolling Hash (ローリングハッシュ)
 * @see https://qiita.com/keymoon/items/11fac5627672a6d6a9f6
 * @doc docs/string/rolling_hash.md
 */

struct RollingHash {
    vector<unsigned long long> power;
    const unsigned long long base;

    static inline unsigned long long AddMod(unsigned long long l,
                                            unsigned long long r) {
        if ((l += r) >= MOD) l -= MOD;
        return l;
    }

    static inline unsigned long long MulMod(unsigned long long l,
                                            unsigned long long r) {
        unsigned long long lu = l >> 31, ld = l & MASK31;
        unsigned long long ru = r >> 31, rd = r & MASK31;
        unsigned long long m = ld * ru + lu * rd;
        unsigned long long res =
            ((lu * ru) << 1) + ld * rd + ((m & MASK30) << 31) + (m >> 30);
        res = (res & MOD) + (res >> 61);
        if (res >= MOD) res -= MOD;
        return res;
    }

    static inline unsigned long long generate_base() {
        mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
        uniform_int_distribution<unsigned long long> rand(2,
                                                          RollingHash::MOD - 1);
        return rand(mt);
    }

    inline void expand(int sz) {
        if (power.size() < sz + 1) {
            int pre_sz = power.size();
            power.resize(sz + 1);
            for (int i = pre_sz - 1; i < sz; i++) {
                power[i + 1] = MulMod(power[i], base);
            }
        }
    }

    explicit RollingHash(unsigned long long base = generate_base())
        : base(base), power{1} {}

    vector<unsigned long long> build(const string &s) const {
        int sz = s.size();
        vector<unsigned long long> hashed(sz + 1);
        for (int i = 0; i < sz; i++) {
            hashed[i + 1] = AddMod(MulMod(hashed[i], base), s[i]);
        }
        return hashed;
    }

    template <typename T>
    vector<unsigned long long> build(const vector<T> &s) const {
        int sz = s.size();
        vector<unsigned long long> hashed(sz + 1);
        for (int i = 0; i < sz; i++) {
            hashed[i + 1] = AddMod(MulMod(hashed[i], base), s[i]);
        }
        return hashed;
    }

    unsigned long long substr(const vector<unsigned long long> &s, int l,
                              int r) {
        expand(r - l);
        return AddMod(s[r], MOD - MulMod(s[l], power[r - l]));
    }

    unsigned long long combine(unsigned long long h1, unsigned long long h2,
                               int h2len) {
        expand(h2len);
        return AddMod(MulMod(h1, power[h2len]), h2);
    }

    int lcp(const vector<unsigned long long> &a, int l1, int r1,
            const vector<unsigned long long> &b, int l2, int r2) {
        int len = min(r1 - l1, r2 - l2);
        int low = 0, high = len + 1;
        while (high - low > 1) {
            int mid = (low + high) / 2;
            if (substr(a, l1, l1 + mid) == substr(b, l2, l2 + mid))
                low = mid;
            else
                high = mid;
        }
        return low;
    }

   private:
    static const unsigned long long MOD = (1LL << 61) - 1;
    static const unsigned long long MASK30 = (1LL << 30) - 1;
    static const unsigned long long MASK31 = (1LL << 31) - 1;
};