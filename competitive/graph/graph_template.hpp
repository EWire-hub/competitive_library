#pragma once

/**
 * @brief Graph Template(グラフテンプレート)
 * @docs docs/graph/graph_template.md
 */

template <class T = long long>
struct Edge {
    int to;
    T cost;
    int idx;

    Edge() = default;
    Edge(int to, T cost = 1, int idx = -1) : to(to), cost(cost), idx(idx) {}
};

template <class T = long long>
struct Graph {
    vector<vector<Edge<T>>> g;
    int es;

    Graph() = default;
    explicit Graph(int n) : g(n), es(0) {}

    size_t size() const { return g.size(); }
    void add_edge(int from, int to, T cost = 1, bool direction = false) {
        if (!direction) g[to].emplace_back(from, cost, es);
        g[from].emplace_back(to, cost, es++);
    }

    inline vector<Edge<T>> &operator[](const int &k) { return g[k]; }

    inline const vector<Edge<T>> &operator[](const int &k) const {
        return g[k];
    }
};