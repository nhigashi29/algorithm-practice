
#include <iostream>
#include <string>
using namespace std;
int main() {
  int data[1000];
  int size = 0;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    string cmd;
    cin >> cmd;
    if (cmd == "push") {
      int a;
      cin >> a;
      data[size] = a;
      size += 1;
    } else if (cmd == "top" && size == 0) {
      cout << "EMPTY" << endl;
    } else if (cmd == "top") {
      cout << data[size - 1] << endl;
    } else if (cmd == "pop" && size > 0) {
      size -= 1;
    }
  }
  return 0;
}
