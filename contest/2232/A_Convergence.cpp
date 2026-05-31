#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FAST_IO                                                                \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &num:a){
        cin>>num;
    }
    sort(a.begin(),a.end());
    int mid=a[n/2];
    int i=0,j=n-1;
    int cnt=0;
    while(i<j){
        if(a[i]==mid && a[j]==mid) break;
        cnt++;
        i++;
        j--;
    }
    cout<<cnt<<endl;
}

int main() {
  FAST_IO
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
