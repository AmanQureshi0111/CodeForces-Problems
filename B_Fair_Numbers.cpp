#include <iostream>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

bool isFair(ll n) {
  ll num = n;
  while (num > 0) {
    int d = num % 10;
    num /= 10;
    if (d == 0)
      continue;
    if (n % d != 0)
      return false;
  }
  return true;
}
void solve() {
  ll n;
  cin >> n;
  while (isFair(n) == false) {
    n++;
  }
  cout << n << endl;
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
