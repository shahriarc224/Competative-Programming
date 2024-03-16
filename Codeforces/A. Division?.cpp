//  https://codeforces.com/contest/1669/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while (t--) {
  
  int a;
  cin>>a;
  
  if(1900<=a)cout<<"Division 1"<<endl;
    if(1600<=a && a<=1899)cout<<"Division 2"<<endl;
  if(1400<=a && a<=1599)cout<<"Division 3"<<endl;
  if(a<=1399)cout<<"Division 4"<<endl;
  

  
  }
}
