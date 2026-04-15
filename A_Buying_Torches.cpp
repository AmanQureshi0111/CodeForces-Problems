#include <iostream>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

ll ceil_div(ll a, ll b) { return (a + b - 1) / b; }
void solve() {
  ll x, y, k;
  cin >> x >> y >> k;
  ll ans = (y * k) + k - 1;
  cout << ceil_div(ans, x - 1) + k << endl;
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
