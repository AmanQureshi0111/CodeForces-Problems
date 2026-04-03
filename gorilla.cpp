#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <string> 
#include <cmath>
#include <unordered_map>
using namespace std;
void solve(){
    long long n,k;
    cin >> n >> k;
    vector<long long> temp(n);
    for(long long i = 0; i < n; i++){
        cin >> temp[i];
    }
    unordered_map<long long,long long> mp;
    for(long long num:temp) mp[num]++;
    vector<long long> freq;
    for(auto it:mp) freq.push_back(it.second);
    long long i=0;
    sort(freq.begin(),freq.end());
    while(k>0 && i<freq.size()-1){
        if(k>=freq[i]){
            k-=freq[i];
            i++;
        }else{
            break;
        }
    }
    cout<<freq.size()-i<<endl;
}
int main() {
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
}