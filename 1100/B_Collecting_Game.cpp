#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  vector<P> a(n);
  for (int i = 0; i < n; i++) {
    ll num;
    cin >> num;
    a[i] = {num, i};
  }
  sort(a.begin(), a.end());
  int j = -1;
  ll sum = 0;
  vector<int> ans(n, 0);
  for (int i = 0; i < n; i++) {
    if (j < i) {
      j++;
      sum += a[j].first;
    }
    while (j < n - 1 && sum >= a[j + 1].first) {
      sum += a[j + 1].first;
      j++;
    }
    ans[a[i].second] = j;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
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
