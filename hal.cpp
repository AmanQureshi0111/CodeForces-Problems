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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    print(arr,n,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}