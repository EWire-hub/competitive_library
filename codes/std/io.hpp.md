---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.4/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: competitive/std/std.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"competitive/std/std.hpp\"\n\n// input\ntemplate<class\
    \ T>\nistream &operator>>(istream &is, vector<T> &v){\n    for(T &in : v) is >>\
    \ in;\n    return is;\n}\ntemplate<class T, class S>\nistream &operator>>(istream\
    \ &is, pair<T, S> &p){\n    is >> p.first >> p.second;\n    return is;\n}\ntemplate<class...\
    \ T> void input(T&... a) {(cin >> ... >> a);}\n\n//output\ntemplate<class T>\n\
    ostream & operator<<(ostream &os, const vector<T> &v){\n    for(int i = 0; i <\
    \ (int)v.size(); i++) os << (i == 0 ? \"\" : \" \") << v[i];\n    return os;\n\
    }\ntemplate<class T, class S>\nostream &operator<<(ostream &os, const pair<T,\
    \ S> &p){\n    os << p.first << \" \" << p.second;\n    return os;\n}\ntemplate<class\
    \ T, class S>\nostream &operator<<(ostream &os, const map<T, S> &mp){\n    for(auto\
    \ &[key, val] : mp) os << key << \":\" << val << \" \";\n    return os;\n}\ntemplate<class\
    \ T>\nostream &operator<<(ostream &os, const set<T> &st){\n    for(auto itr =\
    \ st.begin(); itr != st.end(); itr++) os << (itr == st.begin() ? \"\" : \" \"\
    ) << *itr;\n    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream\
    \ &os, const multiset<T> &st){\n    for(auto itr = st.begin(); itr != st.end();\
    \ itr++) os << (itr == st.begin() ? \"\" : \" \") << *itr;\n    return os;\n}\n\
    template<class T>\nostream &operator<<(ostream &os, queue<T> que){\n    while(!que.empty())\
    \ {\n        os << que.front(); que.pop();\n        if(!que.empty()) os << \"\
    \ \";\n    }\n    return os;\n}\ntemplate<class T>\nostream &operator<<(ostream\
    \ &os, stack<T> st){\n    while(!st.empty()) {\n        os << st.top(); st.pop();\n\
    \        if(!st.empty()) os << \" \";\n    }\n    return os;\n}\ntemplate <class\
    \ T, class Container, class Compare>\nostream &operator<<(ostream &os, priority_queue<T,\
    \ Container, Compare> pq)\n{\n    while (!pq.empty()){\n        os << pq.top();\
    \ pq.pop();\n        if(!pq.empty()) os << \" \";\n    }\n    return os;\n}\n\
    void print() {cout << \"\\n\";}\ntemplate<class T> void print(const T& a) {cout\
    \ << a << '\\n';}\ntemplate<class T, class... Ts> void print(const T& a, const\
    \ Ts&... b) {cout << a; (..., (cout  << ' ' << b)); cout << '\\n';}"
  dependsOn: []
  isVerificationFile: false
  path: codes/std/io.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: codes/std/io.hpp
layout: document
redirect_from:
- /library/codes/std/io.hpp
- /library/codes/std/io.hpp.html
title: codes/std/io.hpp
---
