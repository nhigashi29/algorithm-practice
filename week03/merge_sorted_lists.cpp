#include <iostream>
struct Node {
  int value;
  Node *next;
};

Node *merge_lists(Node *a, Node *b) {
  Node dummy{0, nullptr};
  Node *tail = &dummy;

  while (a != nullptr && b != nullptr) {
    if (a->value < b->value) {
      tail->next = a;
      tail = tail->next;
      a = a->next;
    } else {
      tail->next = b;
      tail = tail->next;
      b = b->next;
    }
  }

  Node *rest = (a != nullptr) ? a : b;

  tail->next = rest;

  return dummy.next;
}

int main() {
  int N, M;
  std::cin >> N >> M;

  Node a_dummy{0, nullptr};
  Node *a_tail = &a_dummy;
  Node b_dummy{0, nullptr};
  Node *b_tail = &b_dummy;

  for (int i = 0; i < N; i++) {
    Node *n = new Node{0, nullptr};
    std::cin >> n->value;
    a_tail->next = n;
    a_tail = n;
  }

  for (int i = 0; i < M; i++) {
    Node *n = new Node{0, nullptr};
    std::cin >> n->value;
    b_tail->next = n;
    b_tail = n;
  }

  Node *head = merge_lists(a_dummy.next, b_dummy.next);
  while (head != nullptr) {
    Node *old = head;
    std::cout << head->value << " ";
    head = head->next;
    delete old;
  }

  std::cout << std::endl;
}
