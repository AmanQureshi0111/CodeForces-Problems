#include<iostream>
#include<vector>
using namespace std;
int main(){
    int testcases,n;
    cin >> testcases;
    vector<int> sum(testcases,0);
    int temp;
    vector<int> num;
    int i=0;
    while(i<testcases){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>temp;
            num.push_back(temp);
        }
        for(int j=0;j<n;j++){
            if(j%2==0){
                sum[i]+=num[j];
            }else{
                sum[i]-=num[j];
            }
        }
        i++;
        num.clear();
    }
    for(i=0;i<testcases;i++){
        cout<<sum[i]<<endl;
    }
    return 0;
}