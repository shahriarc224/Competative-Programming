// https://codeforces.com/contest/1873/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){

   string a;
   cin>>a;

   if(a=="abc" || a=="acb" || a=="bac" || a=="cba") cout<<"YES"<<endl;

   else cout<<"NO"<<endl;
  }
}
