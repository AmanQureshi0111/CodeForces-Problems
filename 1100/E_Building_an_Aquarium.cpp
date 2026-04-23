#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

ll findWater(ll height, vector<ll> &arr) {
  ll water = 0;
  for (auto &h : arr) {
    if (height > h) {
      water += height - h;
    }
  }
  return water;
}
void solve() {
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  for (ll &v : a) {
    cin >> v;
  }
  ll low = 0, high = 1e12;
  ll ans = 0;
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    if (findWater(mid, a) <= x) {
      low = mid + 1;
      ans = mid;
    } else {
      high = mid - 1;
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
