#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
  stack<char> st;
  string blanks;
  cin >> blanks;

  for (char a : blanks) {
    if (a == '(' || a == '[' || a == '{') {
      st.push(a);
    } else if (st.empty()) {
      cout << boolalpha << false << endl;
      return 0;

    } else if (a == ')' && st.top() == '(') {
      st.pop();
    } else if (a == ']' && st.top() == '[') {
      st.pop();
    } else if (a == '}' && st.top() == '{') {
      st.pop();
    } else {
      cout << boolalpha << false << endl;
      return 0;
    }
  }

  cout << boolalpha << st.empty() << endl;

  return 0;
}
