#include <iostream>
#include <unordered_set>

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
  unordered_set<char> st;
  int ans = 0;
  for (auto &ch : s) {
    st.insert(ch);
    ans += st.size();
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
