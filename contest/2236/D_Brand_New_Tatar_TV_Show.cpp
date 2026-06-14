#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a[num]++;
    }
    int j=n;
    while(j>0){
        while(j>0 && a[j]==0) j--;
        if(j>0 && a[j]%2==0){
            cout<<"YES"<<endl;
            return;
        }
        int i=j-1;
        while(i>0 && j<=i+k && a[i]==0) i--;
        if(i>0 && i+k>=j && a[i]>0){
            cout<<"YES"<<endl;
            return;
        }
        if(j-i>k){
            j=i;
            continue;
        }
        int gap=0;
        while(i>0 && gap!=k){
            if(a[i]==0){
                gap++;
            }else{
                gap=0;
            }
            i--;
        }
        j=i;
    }
    cout<<"NO"<<endl;
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
