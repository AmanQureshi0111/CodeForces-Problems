#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  ll k;
  cin >> n;
  cin >> k;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;
      a[i][j] = num;
    }
  }
  int count = (n * n) / 2;
  bool flag = true;
  int not_equal = 0;
  for (int i = 0; i < n && count > 0; i++) {
    for (int j = 0; j < n && count > 0; j++) {
      int i_ = n - 1 - i;
      int j_ = n - 1 - j;
      if (a[i][j] != a[i_][j_]) {
        not_equal++;
      }
      count--;
    }
  }
  if (not_equal > k) {
    cout << "NO" << endl;
    return;
  }
  k -= not_equal;
  if (n % 2 == 0 && k % 2 == 1) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
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
