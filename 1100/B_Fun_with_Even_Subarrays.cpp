#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &num:a){
        cin>>num;
    }
    int i=n-1;
    int last=a[n-1];
    int ans=0;
    while(i>=0 && a[i]==last) i--;
    while(i>=0){
        i-=(n-1-i);
        ans++;
        while(i>=0 && a[i]==last) i--;
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
/*
[1,2,3,4,5,6,7,8]
*/