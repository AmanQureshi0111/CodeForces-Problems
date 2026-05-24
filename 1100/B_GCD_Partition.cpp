#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for (auto &num : a) {
    cin >> num;
    sum += num;
  }
  ll leftSum = 0;
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    leftSum += a[i];
    sum -= a[i];
    ans = max(ans, gcd(sum, leftSum));
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
