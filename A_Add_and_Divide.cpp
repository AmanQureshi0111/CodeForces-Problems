#include <iostream>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int a, b;
  cin >> a >> b;
  int ans = 50;
  for (int add = 0; add < 32; add++) {
    int a_ = a;
    int ops = add;
    int b_ = b + add;
    if (b_ == 1)
      continue;
    while (a_ > 0) {
      a_ /= b_;
      ops++;
    }
    ans = min(ans, ops);
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
