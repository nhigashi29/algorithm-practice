#include <iostream>
#include <ostream>
#include <vector>
struct Node {
  int value;
  Node *next;
};

bool has_cycle(Node *head) {
  Node *fast = head;
  Node *slow = head;

  while (fast != nullptr && fast->next != nullptr) {

    slow = slow->next;
    fast = fast->next->next;

    if (fast == slow) {
      return true;
    }
  };

  return false;
}

int main() {

  int N, M;

  std::cin >> N >> M;

  Node a_dummy{0, nullptr};
  Node *a_tail = &a_dummy;

  std::vector<Node *> nodes;

  for (int i = 0; i < N; i++) {
    Node *n = new Node{0, nullptr};
    nodes.push_back(n);

    std::cin >> n->value;
    a_tail->next = n;
    a_tail = a_tail->next;
  }

  Node *loop_pos = a_dummy.next;

  for (int i = 0; i <= M; i++) {
    if (i == M) {
      a_tail->next = loop_pos;
    }
    loop_pos = loop_pos->next;
  }

  std::cout << std::boolalpha << has_cycle(a_dummy.next) << std::endl;

  for (Node *n : nodes) {
    delete n;
  }
}
