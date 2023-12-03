// clang-format off
#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_14_B"

#include "competitive/std/std.hpp"
#include "competitive/std/io.hpp"
#include "competitive/string/rolling_hash.hpp"

// clang-format off
int main() {
    string T, P;
    input(T, P);

    RollingHash roliha;
    auto h1 = roliha.build(T);
    auto h2 = roliha.build(P);
    for (int i = 0; i + P.size() <= T.size(); i++) {
        if (roliha.substr(h1, i, i + P.size()) ==
            roliha.substr(h2, 0, P.size()))
            print(i);
    }
}