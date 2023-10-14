#pragma once

#include "../graph_template.hpp"

template <typename T>
vector<int> topological_sort(const Graph<T> &g) {
    int n = g.size();
    vector<int> in(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto e : g[i]) {
            in[e.to]++;
        }
    }

    queue<int> que;
    for (int i = 0; i < n; i++) {
        if (in[i] == 0) que.push(i);
    }

    vector<int> res;
    while (!que.empty()) {
        int v = que.front();
        que.pop();
        res.push_back(v);
        for (auto e : g[v]) {
            if (--in[e.to]) que.push(e.to);
        }
    }

    return res;
}