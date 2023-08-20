#pragma once

template <class T = long long>
struct Edge
{
    int to;
    T cost;
    int idx;

    Edge() = default;
    Edge(int to, T cost = 1, int idx = -1) : to(to), cost(cost), idx(idx) {}

    operator int() const { return to; }
};

// struct Graph{

// };