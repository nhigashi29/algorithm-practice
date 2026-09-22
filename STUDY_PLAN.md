# アルゴリズム学習プラン（12週間）

C++ で基礎データ構造から DP までを 12 週間で一通り学ぶためのプラン。
各週 **必須①②** を解き、余裕があれば **③** に挑戦する。

## 進め方

- [ ] 問題を解く前に、テーマの基本（計算量・典型操作）を確認する
- [ ] まず自力で 30 分考える → 分からなければ解説を読む → **何も見ずに書き直す**
- [ ] 解いたら計算量（時間 / 空間）をメモする
- [ ] 解けなかった問題は翌週にもう一度解く

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

- [ ] ① [AtCoder PracticeA – Welcome to AtCoder](https://atcoder.jp/contests/practice/tasks/practice_1)
- [ ] ② [AtCoder ABC086A – Product](https://atcoder.jp/contests/abc086/tasks/abc086_a)
- [ ] ③ [AtCoder ABC081B – Shift only](https://atcoder.jp/contests/abc081/tasks/abc081_b)

メモ:

## Week 2: Array / vector / Two Pointers

学ぶこと: `std::vector` の操作、累積和、左右 2 本のポインタで O(n) にする考え方

- [ ] ① [1480 – Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [ ] ② [167 – Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [ ] ③ [26 – Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

メモ:

## Week 3: Linked List

学ぶこと: ポインタ操作、ダミーノード、fast / slow ポインタ（Floyd の循環検出）

- [ ] ① [206 – Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [ ] ② [21 – Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [ ] ③ [141 – Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

メモ:

## Week 4: Stack / Queue

学ぶこと: `std::stack` / `std::queue`、LIFO と FIFO、補助スタックで状態を持つ設計

- [ ] ① [20 – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] ② [232 – Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [ ] ③ [155 – Min Stack](https://leetcode.com/problems/min-stack/)

メモ:

## Week 5: Hash / map / set

学ぶこと: `unordered_map` / `unordered_set` と `map` / `set` の違い、O(1) 検索でループを減らす

- [ ] ① [1 – Two Sum](https://leetcode.com/problems/two-sum/)
- [ ] ② [217 – Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [ ] ③ [49 – Group Anagrams](https://leetcode.com/problems/group-anagrams/)

メモ:

## Week 6: Sort / Binary Search

学ぶこと: `std::sort`、二分探索の境界条件、`lower_bound` / `upper_bound`

- [ ] ① [704 – Binary Search](https://leetcode.com/problems/binary-search/)
- [ ] ② [35 – Search Insert Position](https://leetcode.com/problems/search-insert-position/)
- [ ] ③ [AtCoder ABC088B – Card Game for Two](https://atcoder.jp/contests/abc088/tasks/abc088_b)

メモ:

## Week 7: Recursion / Tree / BST

学ぶこと: 再帰の終了条件、DFS（前順・中順・後順）、BST の性質（中順で昇順）

- [ ] ① [104 – Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [ ] ② [94 – Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
- [ ] ③ [98 – Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

メモ:

## Week 8: Heap / Priority Queue

学ぶこと: `std::priority_queue`（デフォルトは最大ヒープ）、`greater<>` で最小ヒープ、サイズ k のヒープ

- [ ] ① [703 – Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
- [ ] ② [215 – Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
- [ ] ③ [347 – Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

メモ:

## Week 9: Graph / BFS / DFS

学ぶこと: 隣接リスト・グリッドの表現、BFS で最短距離、DFS で連結成分

- [ ] ① [AtCoder ABC007C – 幅優先探索](https://atcoder.jp/contests/abc007/tasks/abc007_3)
- [ ] ② [200 – Number of Islands](https://leetcode.com/problems/number-of-islands/)
- [ ] ③ [733 – Flood Fill](https://leetcode.com/problems/flood-fill/)

メモ:

## Week 10: Graph応用

学ぶこと: Union-Find（経路圧縮・union by rank）、トポロジカルソート、Dijkstra 法

- [ ] ① [AtCoder ATC001 B – Union Find](https://atcoder.jp/contests/atc001/tasks/unionfind_a)
- [ ] ② [207 – Course Schedule](https://leetcode.com/problems/course-schedule/)
- [ ] ③ [743 – Network Delay Time](https://leetcode.com/problems/network-delay-time/)

メモ:

## Week 11: Dynamic Programming 基礎

学ぶこと: 状態と遷移の定義、配る DP / 貰う DP、メモ化再帰との対応

- [ ] ① [AtCoder DP A – Frog 1](https://atcoder.jp/contests/dp/tasks/dp_a)
- [ ] ② [70 – Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [ ] ③ [AtCoder DP C – Vacation](https://atcoder.jp/contests/dp/tasks/dp_c)

メモ:

## Week 12: DP＋総仕上げ

学ぶこと: ナップサック DP、個数制限なしの DP、これまでの苦手問題の解き直し

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
