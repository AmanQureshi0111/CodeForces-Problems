// #include <cmath>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

// using quadratic equation
/*
void solve() {
  ll n, c;
  cin >> n >> c;
  ll s1 = 0, s2 = 0;
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    s1 += num;
    s2 += (num * num);
  }
  long double d = (long double)(s1 * s1) - (long double)n * (s2 - c);
  ll w = sqrtl(d) - s1;
  cout << w / (2 * n) << endl;
}
*/
// using binary search
bool area(ll w, vector<ll> &s, ll c) {
  ll ans = 0;
  for (auto &v : s) {
    ans += (v + 2 * w) * (v + 2 * w);
    if (ans > c)
      return false;
  }
  return ans <= c;
}
void solve() {
  ll n, c;
  cin >> n >> c;
  vector<ll> s(n);
  for (auto &v : s) {
    cin >> v;
  }
  ll left = 1, right = 1e9;
  ll ans = -1;
  while (left <= right) {
    ll mid = left + (right - left) / 2;
    if (area(mid, s, c)) {
      ans = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
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
