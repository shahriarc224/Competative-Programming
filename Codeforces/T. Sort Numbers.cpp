// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T


#include<bits/stdc++.h>
using namespace std;
int main(){
  
  vector<int>v(3);
  vector<int>v1(3);
  for(int i=0;i<3;i++){
    cin>>v[i];
    v1[i]=v[i];
    
  }
  
  sort(v.begin(),v.end());
  
  for(int i=0;i<3;i++){
    cout<<v[i]<<endl;
  }
  
  cout<<endl;
  for(int i=0;i<3;i++){
    cout<<v1[i]<<endl;
  }
  
  
  
  
  
}
