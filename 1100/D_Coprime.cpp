#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
typedef long long ll;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

vector<int> pairs[1001];

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        mp[num]=i;
    }
    int ans=-1;
    for(int i=1;i<=1000;i++){
        if(mp[i]==0) continue;
        for(auto &j:pairs[i]){
            if(mp[j]==0) continue;
            ans=max(ans,mp[i]+mp[j]);
        }
    }
    cout<<ans<<endl;
}


int main() {
  FAST_IO
  for(int i=1;i<=1000;i++){
    for(int j=1;j<=1000;j++){
        if(__gcd(i,j)==1){
            pairs[i].push_back(j);
        }
    }
  }
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
