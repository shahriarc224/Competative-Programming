// https://codeforces.com/contest/1475/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve (){
long long n; cin>>n;
    long long p=n/2020;
    long long rem=n%2020;
   cout<<(rem<=p ? "YES" : "NO" )<<endl; 
}

int main(){
int tt; cin>>tt;
    while(tt--){
        solve ();
    }
    return 0;
}
