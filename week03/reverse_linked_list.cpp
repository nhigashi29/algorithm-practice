#include <iostream>
struct Node {
  int value;
  Node *next;
};

Node *reverse_list(Node *head) {
  Node *prev = nullptr;
  Node *curr = head;
  while (curr != nullptr) {
    head = curr;
    Node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  return head;
}

int main() {
  int N;
  std::cin >> N;

  Node *head = nullptr;
  Node *crr = nullptr;

  for (int i = 0; i < N; i++) {
    if (i == 0) {
      head = new Node{0, nullptr};
      std::cin >> head->value;
      crr = head;
    } else {
      Node *n = new Node{0, nullptr};
      std::cin >> n->value;
      crr->next = n;
      crr = n;
    }
  }

  head = reverse_list(head);

  for (int i = 0; i < N; i++) {
    Node *old = head;
    std::cout << head->value << " ";

    head = head->next;

    delete old;
  }
  std::cout << std::endl;
}
