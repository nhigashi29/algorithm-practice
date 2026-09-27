#include <iostream>
#include <vector>

using namespace std;
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> nums(N);

  for (int &x : nums) {
    cin >> x;
  }

  int sum = -1;
  int left = 0;
  int right = N - 1;
  while (left < right) {
    sum = nums[left] + nums[right];
    if (sum == M) {
      cout << left << " " << right << endl;
      break;
    }
    if (sum > M)
      right--;
    if (sum < M)
      left++;
  }
}
