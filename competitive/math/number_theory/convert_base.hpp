#pragma once

/**
 * @brief Convert Base (進数変換)
 * @docs docs/convert_base.md
 */

template <typename T = long long>
vector<T> convert_base(T x, T b) {
    vector<T> res;
    while (x) {
        res.push_back(x % abs(b));
        if (res.back() < 0) res.back() += abs(b);
        x -= res.back();
        x /= b;
    }
    if (res.empty()) res.push_back(0);
    reverse(res.begin(), res.end());
    return res;
}