# アルゴリズム学習プラン（12週間）

C++ で基礎データ構造から DP までを 12 週間で一通り学ぶためのプラン。
各週 **必須①②** を解き、余裕があれば **③** に挑戦する（③ は 3 時間の枠外）。

進捗のチェックは、対応するローカル演習の実装・動作確認、または本人の完了申告を表す。オンラインジャッジでの AC とは区別し、問題の形式との差や未完了の自作課題はメモに残す。

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

メモ: Week 1 の基本学習・必須問題は本人申告で完了。任意③は未確認。

## Week 2: Array / vector / Two Pointers

学ぶこと: `std::vector` の操作、累積和、左右 2 本のポインタで O(n) にする考え方

自作: 可変長配列（`push_back` / 容量を倍にして拡張 / 添字アクセス）

- [x] ① [1480 – Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
- [x] ② [167 – Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [ ] ③ [26 – Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

メモ:

- 必須①②に相当するローカル演習は実装・動作確認済み（`week02/running_sum.cpp`、`week02/two_sum.cpp`）。オンラインジャッジへの提出・AC は未確認。②はローカル演習では添字を0始まりで出力する。
- `vector` の入力、参照、size / capacity、拡張時のコピーと償却 O(1) を学習済み。
- 可変長配列の自作は仕組みの説明まで。実装は未着手。
- 任意③は別配列を使う実装まで。元の配列に詰める実装は未完了。
- 必須問題の目標ラインには到達。追加の「0を末尾へ移動」は未着手で、必須には含めない。
- 次回はこの区切りを案内し、未完了課題を補うか Week 3 に進むか本人の希望に合わせる。

## Week 3: Linked List

学ぶこと: ポインタ操作、ダミーノード、fast / slow ポインタ（Floyd の循環検出）

自作: 単方向リスト（`push_front` / 削除 / 反転）

- [x] ① [206 – Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [x] ② [21 – Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [x] ③ [141 – Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

メモ:

- 導入演習 `week03/linked_list_practice.cpp` は、ノードの確保、参照渡しによる `push_front`、先頭からの走査を実装。コンパイルと通常例・空・1要素・負数や重複を含む入力で値の出力を確認済み。
- 導入演習は完了：確保したノードの `delete` と出力末尾の改行を実装。通常例・空・1要素で再検証し、AddressSanitizer / UndefinedBehaviorSanitizer の診断なしを確認。
- 必須①に対応するローカル演習 `week03/reverse_linked_list.cpp` は実装・動作確認済み。入力順に構築した既存リストの `next` を付け替えて反転し、出力後に解放する。元の問題の関数形式に標準入出力とリスト構築・解放を加えた形式。オンラインジャッジへの提出・AC は未確認。
- 通常例・空・1要素・負数と重複・上限1000要素で期待する出力を確認。AddressSanitizer / UndefinedBehaviorSanitizer の診断なし。ループ内で `head = curr` と更新して最後のノードを返す別解も正しい。
- 必須②に対応するローカル演習 `week03/merge_sorted_lists.cpp` は実装・動作確認済み。ダミーノードを使い、既存ノードをつなぎ替えてマージ。残りを `tail->next = rest` でまとめて接続する修正を確認。元の問題の関数形式に標準入出力とリスト構築・解放を加えた形式。オンラインジャッジへの提出・AC は未確認。
- 通常例・残りが複数ある場合（両側）・片方空（両側）・両方空・重複・負数・各1000要素の全9ケースで期待する出力を確認。AddressSanitizer / UndefinedBehaviorSanitizer の診断なし。マージは時間 O(N+M)、追加メモリ O(1)。
- 任意③に対応するローカル演習 `week03/linked_list_cycle.cpp` は実装・動作確認済み。slow / fast のアドレス比較で循環を判定。元の問題の関数形式に、標準入力・0始まりの循環先指定（-1は循環なし）・構築・出力・解放を加えた形式。オンラインジャッジへの提出・AC は未確認。
- 空・1要素・自己循環・先頭/途中/末尾への循環・循環なし・重複値・上限1000要素の全14ケースで期待する出力を確認。AddressSanitizer / UndefinedBehaviorSanitizer の診断なし。判定関数は時間 O(N)、追加メモリ O(1)。テスト用 main では vector にノードのアドレスを保存して各ノードを1回ずつ解放。
- 必須①②と任意③を完了し、Week 3 の問題3問は完了。自作課題のリストからの削除は未完了。次回は Week 4「Stack / Queue」の導入から。自作課題の復習を希望する場合はそちらを扱う。

## Week 4: Stack / Queue

学ぶこと: `std::stack` / `std::queue`、LIFO と FIFO、補助スタックで状態を持つ設計

自作: 配列で stack（push / pop / top）、リングバッファで queue（push / pop / front）

- [ ] ① [20 – Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [ ] ② [232 – Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [ ] ③ [155 – Min Stack](https://leetcode.com/problems/min-stack/)

メモ:

- 導入課題：`week04/stack_practice.cpp` で固定長配列によるスタック（push / pop / top）を自作する。課題提示段階で、実装・動作確認は未完了。次回はこの課題から。

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
| 1 | 2 / 3（本人申告） | 未記録 | 未記録 |
| 2 | 2 / 3（対応するローカル演習） | 空の vector への添字アクセス、未初期化変数、read / write の役割 | ③を元の配列に詰める方法で再実装 |
| 3 | 3 / 3（対応するローカル演習） | 反転後の先頭ポインタの返却、マージの残りの接続、循環を作るループの境界（いずれも修正済み） | 未記録 |
| 4 | / 3 | | |
| 5 | / 3 | | |
| 6 | / 3 | | |
| 7 | / 3 | | |
| 8 | / 3 | | |
| 9 | / 3 | | |
| 10 | / 3 | | |
| 11 | / 3 | | |
| 12 | / 3 | | |
