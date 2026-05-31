#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
typedef long long ll;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);


void solve(){
    ll mod=1000000007;
    ll n;
    cin>>n;
    ll a=(n*(n+1))%mod;
    ll b=(a*(4*n-1))%mod;
    cout<<(b*337)%mod<<endl;
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
