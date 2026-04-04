#include<iostream>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}