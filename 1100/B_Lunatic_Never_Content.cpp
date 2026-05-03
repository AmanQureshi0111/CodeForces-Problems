#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &num : a) {
    cin >> num;
  }

  int ans = 0;
  int i = 0, j = n - 1;
  while (i <= j) {
    ans = gcd(ans, abs(a[i] - a[j]));
    i++, j--;
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
