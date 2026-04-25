#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  int y = 0;
  for (int i = 0; i < 3; i++) {
    for (int &v : a) {
      cin >> v;
    }
    for (int &v : a) {
      if ((x | v) != x)
        break;
      y |= v;
    }
  }
  if (y == x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
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