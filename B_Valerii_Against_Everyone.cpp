#include <iostream>
#include <unordered_map>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> mp;
  bool ans = false;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    mp[num]++;
    if (mp[num] > 1)
      ans = true;
  }
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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
