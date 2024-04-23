//  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
  
  int t;
  cin>>t;
  while(t--){
    
    string a;
    cin>>a;
    
    if(a.size()>10)cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;
    else cout<<a<<endl;
    
  }
  
  
  
}
