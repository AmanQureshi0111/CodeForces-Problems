#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    int a,b;
    cin>>a>>b;
    int _xor=0;
    int n=a-1;
    if(n%4==0){
        _xor=n;
    }else if(n%4==1){
        _xor=1;
    }else if(n%4==2){
        _xor=n+1;
    }else{
        _xor=0;
    }
    if(_xor==b){
        cout<<a<<endl;
    }else if((_xor^b)==a){
        cout<<a+2<<endl;
    }else{
        cout<<a+1<<endl;
    }
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
