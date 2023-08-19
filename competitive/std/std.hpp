#pragma once
#include <bits/stdc++.h>
using namespace std;

// 型名短縮
using lint = long long;
using ld = long double;
using P = pair<lint, lint>;
using VI = vector<int>;
using VVI = vector<VI>;
using VVVI = vector<VVI>;
using VLL = vector<lint>;
using VVLL = vector<VLL>;
using VVVLL = vector<VVLL>;
using VB = vector<bool>;
using VVB = vector<VB>;
using VVVB = vector<VVB>;
using VLD = vector<ld>;
using VVLD = vector<VLD>;
using VVVLD = vector<VVLD>;
using VP = vector<P>;
using VVP = vector<VP>;
using VS = vector<string>;
using VVS = vector<VS>;
using VC = vector<char>;
template <class T>
using PQ_max = priority_queue<T>;
template <class T>
using PQ_min = priority_queue<T, vector<T>, greater<T>>;

// 定数
constexpr ld EPS = 1e-10;
const ld PI = acosl(-1.0);
constexpr int INF = 1e9;
constexpr lint LINF = 1e18;

// マクロ
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define _overload3(_1, _2, _3, name, ...) name
#define _rrep(i, n) rrepi(i, n, 0)
#define rrepi(i, a, b) for (int i = int(a - 1); i >= int(b); --i)
#define rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep)(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
