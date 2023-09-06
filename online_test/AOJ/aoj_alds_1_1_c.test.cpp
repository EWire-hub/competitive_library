#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C"

#include "competitive/std/io.hpp"
#include "competitive/std/std.hpp"
#include "competitive/math/number_theory/is_prime.hpp"

int main() {
    int N; input(N);

    int ans = 0;
    rep(i, N){
        int x; input(x);
        if(is_prime(x)) ans++;
    }
    print(ans);
}