#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C"

#include "../std/io.hpp"
#include "../std/std.hpp"
#include "../math/number_theory/is_prime.hpp"

int main() {
    int N; input(N);

    int ans = 0;
    rep(i, N){
        int x; input(x);
        if(is_prime(x)) ans++;
    }
    print(ans);
}