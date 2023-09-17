#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0233"

#include "competitive/std/std.hpp"
#include "competitive/std/io.hpp"
#include "competitive/math/number_theory/convert_base.hpp"

int main(){
    lint base = -10;

    while(true){
        lint A; input(A);
        if(A == 0) break;
        auto res = convert_base(A, base);
        rep(i, res.size()) cout << res[i];
        cout << "\n";
    }
}