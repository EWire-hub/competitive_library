## 概要
- 素集合の合併( $weight(x) + w = weight(y)$ となるように $x$ が属する集合と $y$ が属する集合をまとめる)
- 同じ集合に属する $x,y$ に対し，$weight(y)-weight(x)$ を計算する

というクエリを高速に行う．

## コンストラクタ
```
WeightedUnionFind(int n)
```
$n$ 個の集合を作成する．集合 $i (0\le i <n)$ には要素 $i$ のみが属し，各要素の重みは $0$ である．計算量: $O(n)$．

## 関数
- `root(x)`: $x$ が属する集合の代表元を返す．
- `weight(x)`: $x$ が属する集合の代表元の重みを基準とした時の $x$ の重みを計算する．
- `diff(x, y)`: 同じ集合に属する $x,y$ に対し，$weight(y)-weight(x)$ を返す．$x,y$ が同じ集合に属していない場合はエラーを返す．
- `same(x, y)`: $x$ と $y$ が同じ集合に属するかを判定する．
- `merge(x, y, w)`: $weight(x) + w = weight(y)$ となるように $x$ が属する集合と $y$ が属する集合を合併する．$x,y$ がもともと同じ集合に属していたら`false`を返す．

## 計算量
- `root(x), weight(x), diff(x, y), same(x, y), merge(x, y)`: amortized $O(\alpha(n))$