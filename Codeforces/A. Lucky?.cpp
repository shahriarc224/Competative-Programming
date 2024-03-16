// https://codeforces.com/contest/1676/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while (t--) {
   string a;
    cin>>a;
    
    int b = a[0] + a[1] + a[2];
    int c = a[3] + a[4] + a[5];
  
  
    if (b == c) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
 
    }
  }
}
