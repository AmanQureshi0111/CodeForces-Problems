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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> ans;
    for(ll i=1;i<=n;i++){
        ll temp=((l+i-1)/i)*i;
        if(temp>r){
            cout<<"NO"<<endl;
            return;
        }
        ans.push_back(temp);
    }
    cout<<"YES"<<endl;
    for(auto &num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
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
