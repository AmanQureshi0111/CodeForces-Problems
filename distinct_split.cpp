#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> prefix(n+1,0);
    vector<int> suffix(n+1,0);
    unordered_set<char> preSet;
    unordered_set<char> sufSet;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1];
        if(preSet.find(s[i-1])==preSet.end()){
            prefix[i]++;
            preSet.insert(s[i-1]);
        }
    }
    for(int i=n-1;i>=0;i--){
        suffix[i]=suffix[i+1];
        if(sufSet.find(s[i])==sufSet.end()){
            sufSet.insert(s[i]);
            suffix[i]++;
        }
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        ans=max(ans,)
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
