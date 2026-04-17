#include <iostream>

using namespace std;
typedef long long ll;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] > s[i]) {
      cout << "YES" << endl;
      cout << i << " " << i + 1 << endl;
      return;
    }
  }
  cout << "NO" << endl;
}
int main() {
  FAST_IO
  solve();
  return 0;
}
