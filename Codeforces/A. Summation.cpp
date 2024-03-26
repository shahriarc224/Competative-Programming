//  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  
 int n;
 cin>>n;
 long long a[n];
 long long sum=0;
 
 for(int i=0;i<n;i++){
   cin>>a[i];
   sum=sum+a[i];
   
 }
  
  if(sum<0)cout<<sum*-1<<endl;
  else cout<<sum<<endl;
  
  
}
