#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int ans=(1<<30)-1;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(i!=num){
            ans&=num;
        }
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
