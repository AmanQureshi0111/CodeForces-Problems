#include <iostream>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  string s;
  cin >> s;
  ll n = s.length();
  ll max1 = 0;
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (s[i] == '1') {
      cnt++;
    } else {
      cnt = 0;
    }
    max1 = max(max1, cnt);
  }
  if (max1 == n) {
    cout << n * n << endl;
    return;
  }
  if (s[0] == '1' && s[n - 1] == '1') {
    ll i = 0;
    cnt = 0;
    while (i < n && s[i] == '1') {
      i++;
      cnt++;
    }
    ll j = n - 1;
    while (j > i && s[j] == '1') {
      j--;
      cnt++;
    }
    max1 = max(max1, cnt);
  }
  max1++;
  ll temp = (max1 + 1) / 2;
  cout << temp * (max1 / 2) << endl;
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
