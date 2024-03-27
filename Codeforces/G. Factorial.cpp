//  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<bits/stdc++.h>
using namespace std;
int main(){
  
 int t;
 cin>>t;
 
 while(t--){
   long long a;
   cin>>a;
   
   long long  fact=1;
   
   for(int i=1;i<=a;i++){
     
     fact=fact*i;
     
   }
   cout<<fact<<endl;
   
 }
 
}
