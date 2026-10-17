#include <iostream>

using namespace std;
struct Node {
  int value;
  Node *next;
};

void push_front(Node *&head, Node *n) {
  n->next = head;
  head = n;
}

int main() {
  int N;
  cin >> N;
  Node *head = nullptr;

  for (int i = 0; i < N; i++) {
    Node *n = new Node{0, nullptr};
    cin >> n->value;
    push_front(head, n);
  }

  while (head != nullptr) {
    cout << head->value << " ";
    Node *old = head;
    head = head->next;
    delete old;
  }
  cout << endl;
}
