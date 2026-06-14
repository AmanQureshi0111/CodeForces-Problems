#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int a,b,x;
    cin>>a>>b>>x;
    int ops=0;
    int ans=max(a,b)-min(a,b);
    while(a!=0 || b!=0){
        ans=min(ans,max(a,b)-min(a,b)+ops);
        if(a>b){
            a/=x;
        }else{
            b/=x;
        }
        ops++;
    }
    cout<<min(ops,ans)<<endl;
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
