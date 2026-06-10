#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    string s;
    cin>>s;
    set<char> st;
    int n=s.length();
    int k=0;
    for(;k<n;k++){
        if(st.find(s[k])!=st.end()) break;
        st.insert(s[k]);
    }
    for(int i=k;i<n;i++){
        if(s[i]!=s[i-k]) {
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
