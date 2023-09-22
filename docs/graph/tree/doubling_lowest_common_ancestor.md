## 概要
ダブリングによって最小共通祖先(LCA)を求める。

## 初期化
```
DoublingLowestCommonAncestor lca(Graph<T> G, int r = 0)
```
頂点 $r$ を根として初期化を行う。

## 関数
- `get_lca(u, v)` :頂点 $u,v$ の最小共通祖先(LCA)を返す。
- `get_dist(u, v)` : 頂点 $u,v$ 間の距離を返す。
- `is_on_path(u, v, x)` : 頂点 $u,v$ を結ぶ経路上に頂点 $x$ が存在するかを返す。
- `climb(u, k)` : 頂点 $u$ から親に向かって $k$ 個遡った頂点を返す。

## 計算量
- `初期化` : $O(V \log V)$
- `get_lca(u, v), get_dist(u, v), is_on_path(u, v, x), climb(u, k)` : $O(\log V)$