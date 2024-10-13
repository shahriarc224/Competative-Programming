// https://codeforces.com/contest/1850/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

  void solve(){
   int n; cin>>n;
      int mx=0,ans;
      for(int i=0;i<n;i++){
          int a,b; cin>>a>>b;
          if(a<=10){
              if(b>mx){
                  mx=b;
               ans=i+1;
              }
          }
      }  
      cout<<ans<<endl;
 
   }

int main(){
    int t; cin>>t;
    while(t--){
    solve();
    }
    return 0;
}
