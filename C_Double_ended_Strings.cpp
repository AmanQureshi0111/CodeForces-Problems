#include <iostream>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    string a;
    string b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    int max_len=0;
    for(int len=1;len<=min(n,m);len++){
        for(int i=0;i<n-len+1;i++){
            string first=a.substr(i,len);
            for(int j=0;j<m-len+1;j++){
                if(first==b.substr(j,len)){
                    max_len=max(max_len,len);
                }
            }
        }
    }
    cout<<n+m-2*max_len<<endl;
}

int main() {
    FAST_IO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}