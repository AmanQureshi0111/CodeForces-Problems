#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> x(q);
  for (int i = 0; i < q; i++) {
    cin >> x[i];
  }
  int prev = 31;
  for (int i = 0; i < q; i++) {
    if (x[i] >= prev) {
      continue;
    }
    int num = (1 << x[i]);
    int add = num >> 1;
    for (int j = 0; j < n; j++) {
      if (a[j] % num == 0) {
        a[j] += add;
      }
    }
    prev = x[i];
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
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
