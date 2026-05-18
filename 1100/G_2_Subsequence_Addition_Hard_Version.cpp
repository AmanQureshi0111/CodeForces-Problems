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
  cin >> n;
  vector<ll> c(n);
  for (ll &num : c) {
    cin >> num;
  }
  sort(c.begin(), c.end());
  if (c[0] != 1) {
    cout << "NO" << endl;
    return;
  }
  ll sum = 1;
  bool flag = true;
  for (int i = 1; i < n; i++) {
    ll num = c[i];
    if (num > sum) {
      flag = false;
      break;
    }
    sum += num;
  }
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
/*
7 1 5 2 1
1 1 2 5 7
sum=3
1 1 2
*/

int main() {
  FAST_IO
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
