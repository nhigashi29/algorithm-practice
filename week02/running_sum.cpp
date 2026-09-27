#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> nums;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;

    nums.push_back(a);
  }

  for (int i = 1; i < N; i++) {
    nums[i] += nums[i - 1];
  }

  for (int i = 0; i < N; i++) {
    cout << nums[i] << ' ';
  }
}
