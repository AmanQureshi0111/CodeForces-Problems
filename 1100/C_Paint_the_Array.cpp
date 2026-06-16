#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n;
    cin>>n;
    vector<ll> nums(n);
    for(auto &num:nums){
        cin>>num;
    }
    ll even=nums[0];
    ll odd=nums[1];
    for(int i=2;i<n;i+=2){
        even=gcd(even,nums[i]);
    }
    for(int i=3;i<n;i+=2){
        odd=gcd(odd,nums[i]);
    }
    //check even
    bool flag=true;
    for(int i=0;i<n;i+=2){
        if(nums[i]%odd==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<odd<<endl;
        return;
    }
    // check odd
    flag=true;
    for(int i=1;i<n;i+=2){
        if(nums[i]%even==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<even<<endl;
        return;
    }
    cout<<0<<endl;
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
