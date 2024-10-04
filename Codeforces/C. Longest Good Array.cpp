// https://codeforces.com/problemset/problem/2008/C

#include<bits/stdc++.h>
using namespace std ;

void solve() {
    int l, r; 
    cin >> l >> r;
    
    int mxl = 0; 
    int current = l; 
    
    while (current <= r) {
        mxl++; 
        current += mxl; 
    }
    
    cout << mxl << endl; 
}

int main()
{
    int t; cin>>t;
    while(t--){
      solve();
    }
  
    return 0;
}
