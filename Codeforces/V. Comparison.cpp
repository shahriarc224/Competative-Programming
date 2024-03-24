// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include<bits/stdc++.h>
using namespace std ;
int main(){
  long long a,c;
  string b;
  cin>>a>>b>>c;
  
  if(a>c && b[0]=='>'){
    cout<<"Right"<<endl;
    
  }
  else if(a<c && b[0]=='<'){
    
    cout<<"Right"<<endl;
    
  }else if(a==c && b[0]=='='){
    
    cout<<"Right"<<endl;
    
  }else cout<<"Wrong"<<endl;
  
  
}
