#include <iostream>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int rows, cols;
  cin >> rows >> cols;
  int cntNeg = 0;
  int smallest = 100;
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      int num;
      cin >> num;
      sum += abs(num);
      if (num < 0)
        cntNeg++;
      smallest = min(smallest, abs(num));
    }
  }
  if (cntNeg % 2 == 1) {
    sum -= smallest * 2;
  }
  cout << sum << endl;
}
int main() {
  FAST_IO
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
