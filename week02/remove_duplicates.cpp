#include <iostream>
#include <vector>

using namespace std;
int main() {

  int N;

  cin >> N;

  vector<int> nums(N);

  for (int &x : nums) {
    cin >> x;
  }

  int write = 1;
  vector<int> results = {nums[0]};

  for (int read = 1; read < N; read++) {
    if (nums[read] != nums[write - 1]) {
      results.push_back(nums[read]);
      write = read + 1;
    }
  }

  for (int &x : results) {
    cout << x << " ";
  }
}
