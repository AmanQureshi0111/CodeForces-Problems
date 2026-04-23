#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  ll n, k, a, b;
  cin >> n >> k >> a >> b;
  vector<vector<ll>> points(n);
  for (int i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    points[i] = {x, y};
  }
  if (a <= k && b <= k) {
    cout << 0 << endl;
    return;
  }
  ll cost_a = 4 * 1e9;
  ll cost_b = 4 * 1e9;
  if (a <= k) {
    cost_a = 0;
  }
  if (b <= k) {
    cost_b = 0;
  }
  for (int i = 0; i < k; i++) {
    if (a - 1 != i) {
      cost_a = min(cost_a, abs(points[i][0] - points[a - 1][0]) +
                               abs(points[i][1] - points[a - 1][1]));
    }
    if (b - 1 != i) {
      cost_b = min(cost_b, abs(points[i][0] - points[b - 1][0]) +
                               abs(points[i][1] - points[b - 1][1]));
    }
  }
  cout << min(cost_a + cost_b, abs(points[a - 1][0] - points[b - 1][0]) +
                                   abs(points[a - 1][1] - points[b - 1][1]))
       << endl;
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
