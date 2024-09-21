// https://codeforces.com/contest/1791/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
      string a="codeforces";
  while(t--){
   char b;
   cin>>b;

if (a.find(b) != string::npos) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
}
