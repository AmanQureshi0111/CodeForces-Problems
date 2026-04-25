#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (auto &v : a) {
    cin >> v;
  }
  sort(a.begin(), a.end());
  vector<ll> prefix_sum(n + 1);
  for (int i = 0; i < n; i++) {
    prefix_sum[i + 1] = prefix_sum[i] + a[i];
  }
  ll ans = 0;
  for (int m = 0; m <= k; m++) {
    int M = k - m;
    ans = max(ans, prefix_sum[n - M] - prefix_sum[2 * m]);
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