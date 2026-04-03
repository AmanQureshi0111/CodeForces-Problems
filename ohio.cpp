#include<iostream>
#include<vector>
using namespace std;
void solve(){
    string s;
    cin>>s;
    bool flag=false;
    int n=s.length();
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<1<<endl;
    }else{
        cout<<n<<endl;
    }
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