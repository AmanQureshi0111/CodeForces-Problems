#include <iostream>
#include <vector>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (auto &num : a) {
    cin >> num;
  }
  for (auto &num : b) {
    cin >> num;
  }
  int l = -1, r = n - 1;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i])
      continue;
    if (l == -1) {
      l = i;
    } else {
      r = i;
    }
  }
  if (l == -1) {
    cout << 1 << " " << n << endl;
    return;
  }
  while (l > 0 && b[l] >= b[l - 1]) {
    l--;
  }
  while (r < n - 1 && b[r] <= b[r + 1]) {
    r++;
  }
  cout << l + 1 << " " << r + 1 << endl;
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
