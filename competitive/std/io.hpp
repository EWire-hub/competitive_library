#pragma once
#include "competitive/std/std.hpp"

// input
template<class T>
istream &operator>>(istream &is, vector<T> &v){
    for(T &in : v) is >> in;
    return is;
}
template<class T, class S>
istream &operator>>(istream &is, pair<T, S> &p){
    is >> p.first >> p.second;
    return is;
}
template<class... T> void input(T&... a) {(cin >> ... >> a);}

//output
template<class T>
ostream & operator<<(ostream &os, const vector<T> &v){
    for(int i = 0; i < (int)v.size(); i++) os << (i == 0 ? "" : " ") << v[i];
    return os;
}
template<class T, class S>
ostream &operator<<(ostream &os, const pair<T, S> &p){
    os << p.first << " " << p.second;
    return os;
}
template<class T, class S>
ostream &operator<<(ostream &os, const map<T, S> &mp){
    for(auto &[key, val] : mp) os << key << ":" << val << " ";
    return os;
}
template<class T>
ostream &operator<<(ostream &os, const set<T> &st){
    for(auto itr = st.begin(); itr != st.end(); itr++) os << (itr == st.begin() ? "" : " ") << *itr;
    return os;
}
template<class T>
ostream &operator<<(ostream &os, const multiset<T> &st){
    for(auto itr = st.begin(); itr != st.end(); itr++) os << (itr == st.begin() ? "" : " ") << *itr;
    return os;
}
template<class T>
ostream &operator<<(ostream &os, queue<T> que){
    while(!que.empty()) {
        os << que.front(); que.pop();
        if(!que.empty()) os << " ";
    }
    return os;
}
template<class T>
ostream &operator<<(ostream &os, stack<T> st){
    while(!st.empty()) {
        os << st.top(); st.pop();
        if(!st.empty()) os << " ";
    }
    return os;
}
template <class T, class Container, class Compare>
ostream &operator<<(ostream &os, priority_queue<T, Container, Compare> pq)
{
    while (!pq.empty()){
        os << pq.top(); pq.pop();
        if(!pq.empty()) os << " ";
    }
    return os;
}
void print() {cout << "\n";}
template<class T> void print(const T& a) {cout << a << '\n';}
template<class T, class... Ts> void print(const T& a, const Ts&... b) {cout << a; (..., (cout  << ' ' << b)); cout << '\n';}