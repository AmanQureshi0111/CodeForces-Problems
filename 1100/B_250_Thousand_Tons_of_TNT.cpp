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
  int n;
  cin >> n;
  vector<ll> prefix_sum(n + 1);
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    prefix_sum[i + 1] = num + prefix_sum[i];
  }
  ll ans = 0;
  for (int k = 1; k * k <= n; k++) {
    if (n % k != 0)
      continue;
    int first = k;
    int second = n / k;
    ll maxi = 0LL;
    ll mini = LLONG_MAX;
    // for first
    for (int i = first; i <= n; i += first) {
      ll weights = prefix_sum[i] - prefix_sum[i - first];
      maxi = max(maxi, weights);
      mini = min(mini, weights);
    }
    ans = max(ans, maxi - mini);
    if (first == second)
      continue;
    maxi = 0;
    mini = LLONG_MAX;
    for (int i = second; i <= n; i += second) {
      ll weights = prefix_sum[i] - prefix_sum[i - second];
      maxi = max(maxi, weights);
      mini = min(mini, weights);
    }
    ans = max(ans, maxi - mini);
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