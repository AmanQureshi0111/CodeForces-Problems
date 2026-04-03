#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);

typedef tuple<int,int,string> t3;

int main() {
    FAST_IO
    int n;
    cin>>n;
    vector<t3> vec;
    for(int i=0;i<n;i++){
        int a,b,s;
        cin>>a;
        cin>>b;
        cin>>s;
        vec.push_back({a,b,s});
    }
    
    return 0;
}
