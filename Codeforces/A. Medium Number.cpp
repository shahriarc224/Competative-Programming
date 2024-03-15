// https://codeforces.com/contest/1760/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int t ;
  cin>>t;
  while(t--){
    
   int a[3];
   for(int i=0;i<3;i++){
     cin>>a[i];
     
   }
   
   if(a[0]<a[1] && a[1]<a[2]) cout<<a[1]<<endl;
   if(a[2]<a[1] && a[1]<a[0]) cout<<a[1]<<endl;
   if(a[0]<a[2] && a[2]<a[1]) cout<<a[2]<<endl;
   if(a[1]<a[2] && a[2]<a[0]) cout<<a[2]<<endl;
   if(a[2]<a[0] && a[0]<a[1]) cout<<a[0]<<endl;
   if(a[1]<a[0] && a[0]<a[2]) cout<<a[0]<<endl;
   
   
    
  }
}
