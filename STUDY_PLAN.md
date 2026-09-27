# アルゴリズム学習プラン（12週間）

C++ で基礎データ構造から DP までを 12 週間で一通り学ぶためのプラン。
各週 **必須①②** を解き、余裕があれば **③** に挑戦する（③ は 3 時間の枠外）。

## 毎週 3 時間の使い方

| 時間 | 内容 |
| ---- | ---- |
| 0:00–0:45 | 概念復習 |
| 0:45–1:30 | C++で自作 |
| 1:30–2:45 | 必須 2 問 |
| 2:45–3:00 | 復習 |

### 0:00–0:45 概念復習

その週のデータ構造について、何も見ずに紙に書けるようにする。

- 何に使う？
- 操作の計算量は？
- どんな問題で使う？

### 0:45–1:30 C++で自作

いきなり STL を使わず、一度自分で実装してから STL を使う。
例: heap 週なら `priority_queue` を使う前に parent → left/right child → push → pop → heapify を自分で書く。
各週の「自作」を参照。

### 1:30–2:45 必須 2 問

- 1 問あたり 30〜40 分
- 15〜20 分考えて全く方針が出なかったら、解説を見て OK
- 解説を読んで AC したら終わりにしない。**コードを閉じて、もう一度自力で書く**

### 2:45–3:00 復習

- その週の「メモ」と下の「振り返り」表を埋める
- 解けなかった問題は翌週もう一度解く

## 一覧

| Week | テーマ | 必須① | 必須② | 余裕があれば③ |
| ---- | ------ | ----- | ----- | ------------ |
| 1 | C++基礎・計算量 | [AtCoder PracticeA – Welcome to AtCoder](https://atcoder.jp/contests/practice/tasks/practice_1) | [AtCoder ABC086A – Product](https://atcoder.jp/contests/abc086/tasks/abc086_a) | [AtCoder ABC081B – Shift only](https://atcoder.jp/contests/abc081/tasks/abc081_b) |
| 2 | Array / vector / Two Pointers | [1480 – Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/) | [167 – Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | [26 – Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |
| 3 | Linked List | [206 – Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | [21 – Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | [141 – Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) |
| 4 | Stack / Queue | [20 – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | [232 – Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | [155 – Min Stack](https://leetcode.com/problems/min-stack/) |
| 5 | Hash / map / set | [1 – Two Sum](https://leetcode.com/problems/two-sum/) | [217 – Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [49 – Group Anagrams](https://leetcode.com/problems/group-anagrams/) |
| 6 | Sort / Binary Search | [704 – Binary Search](https://leetcode.com/problems/binary-search/) | [35 – Search Insert Position](https://leetcode.com/problems/search-insert-position/) | [AtCoder ABC088B – Card Game for Two](https://atcoder.jp/contests/abc088/tasks/abc088_b) |
| 7 | Recursion / Tree / BST | [104 – Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | [94 – Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | [98 – Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/) |
| 8 | Heap / Priority Queue | [703 – Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | [215 – Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | [347 – Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) |
| 9 | Graph / BFS / DFS | [AtCoder ABC007C – 幅優先探索](https://atcoder.jp/contests/abc007/tasks/abc007_3) | [200 – Number of Islands](https://leetcode.com/problems/number-of-islands/) | [733 – Flood Fill](https://leetcode.com/problems/flood-fill/) |
| 10 | Graph応用 | [AtCoder ATC001 B – Union Find](https://atcoder.jp/contests/atc001/tasks/unionfind_a) | [207 – Course Schedule](https://leetcode.com/problems/course-schedule/) | [743 – Network Delay Time](https://leetcode.com/problems/network-delay-time/) |
| 11 | Dynamic Programming 基礎 | [AtCoder DP A – Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a) | [70 – Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | [AtCoder DP C – Vacation](https://atcoder.jp/contests/dp/tasks/dp_c) |
| 12 | DP＋総仕上げ | [198 – House Robber](https://leetcode.com/problems/house-robber/) | [AtCoder DP D – Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d) | [322 – Coin Change](https://leetcode.com/problems/coin-change/) |

---

## Week 1: C++基礎・計算量

学ぶこと: 入出力（`cin` / `cout`）、`int` と `long long`、ループ、O 記法の感覚

自作: 簡単な入出力と、O(n) / O(n²) のループを書いて n を増やしたときの実行時間を比べる

- [x] ① [AtCoder PracticeA – Welcome to AtCoder](https://atcoder.jp/contests/practice/tasks/practice_1)
- [x] ② [AtCoder ABC086A – Product](https://atcoder.jp/contests/abc086/tasks/abc086_a)
- [ ] ③ [AtCoder ABC081B – Shift only](https://atcoder.jp/contests/abc081/tasks/abc081_b)

メモ: Week 1 の基本学習・必須問題は完了。次回は Week 2 から進める。

## Week 2: Array / vector / Two Pointers

学ぶこと: `std::vector` の操作、累積和、左右 2 本のポインタで O(n) にする考え方

自作: 可変長配列（`push_back` / 容量を倍にして拡張 / 添字アクセス）

- [ ] ① [1480 – Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [ ] ② [167 – Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [ ] ③ [26 – Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

メモ:

## Week 3: Linked List

学ぶこと: ポインタ操作、ダミーノード、fast / slow ポインタ（Floyd の循環検出）

自作: 単方向リスト（`push_front` / 削除 / 反転）

- [ ] ① [206 – Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [ ] ② [21 – Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [ ] ③ [141 – Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

メモ:

## Week 4: Stack / Queue

学ぶこと: `std::stack` / `std::queue`、LIFO と FIFO、補助スタックで状態を持つ設計

自作: 配列で stack（push / pop / top）、リングバッファで queue（push / pop / front）

- [ ] ① [20 – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] ② [232 – Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [ ] ③ [155 – Min Stack](https://leetcode.com/problems/min-stack/)

メモ:

## Week 5: Hash / map / set

学ぶこと: `unordered_map` / `unordered_set` と `map` / `set` の違い、O(1) 検索でループを減らす

自作: チェイン法のハッシュセット（insert / find / erase）

- [ ] ① [1 – Two Sum](https://leetcode.com/problems/two-sum/)
- [ ] ② [217 – Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [ ] ③ [49 – Group Anagrams](https://leetcode.com/problems/group-anagrams/)

メモ:

## Week 6: Sort / Binary Search

学ぶこと: `std::sort`、二分探索の境界条件、`lower_bound` / `upper_bound`

自作: マージソート、`lower_bound` 相当の二分探索

- [ ] ① [704 – Binary Search](https://leetcode.com/problems/binary-search/)
- [ ] ② [35 – Search Insert Position](https://leetcode.com/problems/search-insert-position/)
- [ ] ③ [AtCoder ABC088B – Card Game for Two](https://atcoder.jp/contests/abc088/tasks/abc088_b)

メモ:

## Week 7: Recursion / Tree / BST

学ぶこと: 再帰の終了条件、DFS（前順・中順・後順）、BST の性質（中順で昇順）

自作: BST（insert / find / 中順走査）

- [ ] ① [104 – Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [ ] ② [94 – Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
- [ ] ③ [98 – Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

メモ:

## Week 8: Heap / Priority Queue

学ぶこと: `std::priority_queue`（デフォルトは最大ヒープ）、`greater<>` で最小ヒープ、サイズ k のヒープ

自作: 二分ヒープ（parent → left/right child → push → pop → heapify）

- [ ] ① [703 – Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
- [ ] ② [215 – Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
- [ ] ③ [347 – Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

メモ:

## Week 9: Graph / BFS / DFS

学ぶこと: 隣接リスト・グリッドの表現、BFS で最短距離、DFS で連結成分

自作: 隣接リストでグラフを作り、BFS（キュー）と DFS（再帰）を書く

- [ ] ① [AtCoder ABC007C – 幅優先探索](https://atcoder.jp/contests/abc007/tasks/abc007_3)
- [ ] ② [200 – Number of Islands](https://leetcode.com/problems/number-of-islands/)
- [ ] ③ [733 – Flood Fill](https://leetcode.com/problems/flood-fill/)

メモ:

## Week 10: Graph応用

学ぶこと: Union-Find（経路圧縮・union by rank）、トポロジカルソート、Dijkstra 法

自作: Union-Find（経路圧縮・union by size）、ヒープを使った Dijkstra 法

- [ ] ① [AtCoder ATC001 B – Union Find](https://atcoder.jp/contests/atc001/tasks/unionfind_a)
- [ ] ② [207 – Course Schedule](https://leetcode.com/problems/course-schedule/)
- [ ] ③ [743 – Network Delay Time](https://leetcode.com/problems/network-delay-time/)

メモ:

## Week 11: Dynamic Programming 基礎

学ぶこと: 状態と遷移の定義、配る DP / 貰う DP、メモ化再帰との対応

自作: 同じ問題をメモ化再帰とボトムアップ DP の両方で書く

- [ ] ① [AtCoder DP A – Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a)
- [ ] ② [70 – Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [ ] ③ [AtCoder DP C – Vacation](https://atcoder.jp/contests/dp/tasks/dp_c)

メモ:

## Week 12: DP＋総仕上げ

学ぶこと: ナップサック DP、個数制限なしの DP、これまでの苦手問題の解き直し

自作: 0-1 ナップサックを 2 次元 DP で書き、1 次元配列に圧縮する

- [ ] ① [198 – House Robber](https://leetcode.com/problems/house-robber/)
- [ ] ② [AtCoder DP D – Knapsack 1](https://atcoder.jp/contests/dp/tasks/dp_d)
- [ ] ③ [322 – Coin Change](https://leetcode.com/problems/coin-change/)

メモ:

---

## 振り返り

| Week | 解けた問題数 | 苦手だったこと | 解き直す問題 |
| ---- | ----------- | ------------- | ----------- |
| 1 | / 3 | | |
| 2 | / 3 | | |
| 3 | / 3 | | |
| 4 | / 3 | | |
| 5 | / 3 | | |
| 6 | / 3 | | |
| 7 | / 3 | | |
| 8 | / 3 | | |
| 9 | / 3 | | |
| 10 | / 3 | | |
| 11 | / 3 | | |
| 12 | / 3 | | |
