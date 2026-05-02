#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

ll mod = 1e9 + 7;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll &num : a) {
    cin >> num;
  }
  for (ll &num : b) {
    cin >> num;
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  ll i = 0;
  ll ans = 1;
  for (ll j = 0; j < n; j++) {
    while (i < n && a[i] > b[j]) {
      i++;
    }
    ans = (ans * max(i - j, 0LL) % mod) % mod;
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
