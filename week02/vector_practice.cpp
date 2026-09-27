#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> nums;

  for (int i = 0; i < 10; i++) {
    nums.push_back(i);

    cout << "size: " << nums.size() << ", capacity: " << nums.capacity()
         << '\n';
  }
}
