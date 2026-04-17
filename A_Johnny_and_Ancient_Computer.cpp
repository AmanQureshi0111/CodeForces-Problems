#include <iostream>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  ll a, b;
  cin >> a >> b;
  ll x = 0, y = 0;
  while (a > 1 && a % 2 == 0) {
    x++;
    a /= 2;
  }
  while (b > 1 && b % 2 == 0) {
    y++;
    b /= 2;
  }
  if (a != b) {
    cout << -1 << endl;
    return;
  }
  ll ans = (abs(x - y) + 2) / 3;
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
