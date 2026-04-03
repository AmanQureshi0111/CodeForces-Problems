#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr,int n,int k){
    if(k>1){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
void solve(){
    int n,k,p;
    cin>>n>>k>>p;
    if(k==0) {
        cout<<0<<endl;
        return;
    }
    int num=abs(k)/p;
    if(abs(k)%p==1) num++;
    if(num<n){
        cout<<-1<<endl;
        return;
    }
    cout<<num<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}