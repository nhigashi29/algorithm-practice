#include <chrono>
#include <iostream>

using namespace std;

long long o_n_calc(int n) {
  long long cnt = 0;

  for (int i = 0; i < n; i++) {
    cnt++;
  }

  return cnt;
}

long long o_nn_calc(int n) {
  long long cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cnt++;
    }
  }

  return cnt;
}

int main() {

  int n;

  cin >> n;

  auto start_o_n_calc = chrono::steady_clock::now();

  long long result1 = o_n_calc(n);

  auto end_o_n_calc = chrono::steady_clock::now();

  cout << "result1: " << result1 << endl;
  cout << "O(n) takes "
       << chrono::duration_cast<chrono::microseconds>(end_o_n_calc -
                                                      start_o_n_calc)
              .count()
       << " microseconds" << endl;

  // auto start_o_nn_calc = chrono::steady_clock::now();
  //
  // long long result2 = o_nn_calc(n);
  //
  // auto end_o_nn_calc = chrono::steady_clock::now();
  //
  // cout << "result2: " << result2 << endl;
  // cout << "o(n^2) takes "
  //      << chrono::duration_cast<chrono::microseconds>(end_o_nn_calc -
  //                                                     start_o_nn_calc)
  //             .count()
  //      << " microseconds" << endl;
}
