#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    map<ll,int> mp;
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        mp[num]++; 
    }
    for(auto &it:mp){
        ll num=it.first;
        mp[num]--;
        if(mp[num-k]>0){
            cout<<"YES"<<endl;
            return;
        }
        mp[num]++;
    }
    cout<<"NO"<<endl;
    return;
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
/*
2-4 2-4 7
7-4-2+4
 
c=-k+d

c-b 

*/