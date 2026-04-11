#include <iostream>
using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

ll next_prime(ll n) {
  for (ll i = n;; i++) {
    bool isPrime = true;
    for (ll j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      return i;
  }
  return -1;
}
void solve() {
  ll d;
  cin >> d;
  ll p = next_prime(d + 1);
  ll q = next_prime(p + d);
  ll ans = min(p * p * p, p * q);
  cout << ans << endl;
}
int main() {
  FAST_IO
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
