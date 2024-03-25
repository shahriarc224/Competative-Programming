// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B


#include<bits/stdc++.h>
using namespace std;
int main(){
  
  long long a,b,c;
  cin>>a>>b>>c;
  
  if(a%c==0 && b%c==0 )cout<<"Both"<<endl;
   if(a%c==0 && b%c!=0 )cout<<"Memo"<<endl;
    if(a%c!=0 && b%c==0 )cout<<"Momo"<<endl;
     if(a%c!=0 && b%c!=0 )cout<<"No One"<<endl;
  
  
}
