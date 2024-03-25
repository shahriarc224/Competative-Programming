// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
  
   long long n;
   cin>>n;
   if(n==1)cout<<-1<<endl;
   
   else {
    for(int i=1;i<=n;i++){
      if(i%2==0)cout<<i<<endl;
    }
   }
}
  
  
