#include<iostream>
#include<vector>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    s=s.substr(0,n-2);
    s+="i";
    cout<<s<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}