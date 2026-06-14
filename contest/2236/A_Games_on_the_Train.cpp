#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    int maxi=1;
    int mini=6;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        maxi=max(maxi,num);
        mini=min(mini,num);
    }
    cout<<maxi-mini+1<<endl;
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
