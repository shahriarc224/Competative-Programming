// https://www.hackerrank.com/challenges/simple-array-sum/problem

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
        int arr[n];
        int sum=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
        for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
cout<<sum<<endl;
    return 0;
}
