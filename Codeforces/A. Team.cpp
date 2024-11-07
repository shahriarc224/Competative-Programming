// https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;

int main(){
int t; cin>>t;
    int arr[3];
    int cnt=0;
    while(t--){
        for(int i=0;i<3;i++) cin>>arr[i];
        if(arr[0]==1 && arr[1]==1 && arr[2]==1 || arr[0]==1 && arr[1]==1 && arr[2]==0 || arr[0]==1 && arr[1]==0 && arr[2]==1 || arr[0]==0 && arr[1]==1 && arr[2]==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
