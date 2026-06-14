#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> sum(n);
    for(int i=0;i<n;i++){
        if(i-k>=0){
            sum[i]+=sum[i-k];
        }
        sum[i]+=(s[i]-'0');
    }
    for(int i=n-1;i>=n-k;i--){
        if(sum[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
