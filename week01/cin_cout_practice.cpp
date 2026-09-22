#include <iostream>
#include <string>

using namespace std;

void input_and_print_num() {
  int a;
  cin >> a;
  cout << a << endl;
}

void input_two_nums_and_print() {
  int a, b;
  cin >> a >> b;
  cout << "a: " << a << "b: " << b << endl;
}

void input_a_string_and_print() {
  string a;
  cin >> a;
  cout << a << endl;
}

int main() {
  input_and_print_num();
  input_two_nums_and_print();
  input_a_string_and_print();
  return 0;
}
