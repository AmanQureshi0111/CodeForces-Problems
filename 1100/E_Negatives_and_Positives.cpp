#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (auto &num : a) {
    cin >> num;
  }
  ll ans = 0;
  int cntneg = 0;
  ll mini = 1e9 + 1;
  for (int i = 0; i < n; i++) {
    mini = min(mini, abs(a[i]));
    ans += abs(a[i]);
    if (a[i] < 0) {
      cntneg = (cntneg + 1) % 2;
    }
  }
  if (cntneg == 1) {
    ans -= abs(mini) * 2LL;
  }
  cout << ans << endl;
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
