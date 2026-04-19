#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  ll maxTillNow = 0;
  vector<ll> a(n);
  vector<ll> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  ll sum = 0;
  for (int i = 0; i < n && k > 0; i++) {
    maxTillNow = max(maxTillNow, b[i]);
    sum += a[i];
    k--;
    ans = max(ans, sum + maxTillNow * k);
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
