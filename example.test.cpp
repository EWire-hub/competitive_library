#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include <algorithm>
#include <iostream>
#include <vector>
#include<set>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define ALL(x) std::begin(x), std::end(x)
using namespace std;

int main() {
    int n; cin >> n;
    set<int> s;
    REP (i, n) {
        int e; cin >> e; s.insert(e);
    }
    int q; cin >> q;
    int cnt = 0;
    while (q --) {
        int t_i; cin >> t_i;
        cnt += s.count(t_i);
    }
    cout << cnt << "\n";
    return 0;
}
