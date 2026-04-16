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
  int open = 0;
  int closed = 0;
  int ops = 0;
  for (auto &ch : s) {
    if (ch == '(') {
      open++;
    } else {
      closed++;
    }
    ops = max(ops, closed - open);
  }
  cout << ops << endl;
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
