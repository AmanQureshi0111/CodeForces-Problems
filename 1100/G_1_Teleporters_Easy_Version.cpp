#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  ll c;
  cin >> n;
  cin >> c;
  vector<ll> costs(n);
  for (ll i = 1; i <= n; i++) {
    ll cost;
    cin >> cost;
    costs[i - 1] = cost + i;
  }
  sort(costs.begin(), costs.end());
  int i = 0;
  ll currentCost = 0;
  while (i < n && currentCost + costs[i] <= c) {
    currentCost += costs[i++];
  }
  cout << i << endl;
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
