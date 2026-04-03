#include<iostream>
#include<vector>
using namespace std;
int sumOf(int x){
    if(x<9) return x;
    int d=x%10;
    x=x/10;
    return d+sumOf(x);
}
void solve(){
   int x,y;
   cin>>x>>y;
   int dx=sumOf(x);
   int dx1=sumOf(x+1);
   int dy=sumOf(y);
   int dy1=sumOf(y+1);
//    if(dx1==dy) cout<<"yes"<<endl;
//    else if(dx==dy1) cout<<"yes"<<endl;
//    else cout<<"no"<<endl;
    cout<<dx<<endl;
    cout<<dx1<<endl;
    cout<<dy<<endl;
    cout<<dy1<<endl;
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