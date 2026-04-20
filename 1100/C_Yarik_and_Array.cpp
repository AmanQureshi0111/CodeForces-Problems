#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll maxSum = arr[0];
  ll currSum = max(arr[0], 0LL);
  for (int i = 1; i < n; i++) {
    int leftParity = (arr[i - 1] % 2 + 2) % 2;
    int rightParity = (arr[i] % 2 + 2) % 2;
    if (leftParity != rightParity) {
      currSum += arr[i];
    } else {
      currSum = arr[i];
    }
    maxSum = max(maxSum, currSum);
    currSum = max(currSum, 0LL);
  }
  cout << maxSum << endl;
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
