#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    ll leftSum=0;
    map<ll,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        leftSum+=arr[i];
        mp[leftSum]=i;
    }
    ll rightSum=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        rightSum+=arr[i];
        mp.erase(leftSum);
        if(mp.find(rightSum)!=mp.end()){
            ans=max(ans,mp[rightSum]+1+n-i);
        }
        leftSum-=arr[i];
    }
    cout<<ans<<endl;
}

int main() {
    FAST_IO
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
