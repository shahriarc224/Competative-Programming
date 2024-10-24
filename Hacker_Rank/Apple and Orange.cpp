// https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve(){
  int s,t,a,b,m,n;
     cin>>s>>t>>a>>b>>m>>n;
     
    int ap[m];
    int ora[n];
    for(int i=0;i<m;i++) cin>>ap[i];
    for(int j=0;j<n;j++)  cin>>ora[j];  
  
    int cnta=0,cnto=0;
     for(int i=0;i<m;i++){
      if( (ap[i]+a>=s) && (ap[i]+a<=t) ) cnta++;
  }
     for(int j=0;j<n;j++){
      if( (ora[j]+b) >=s && (ora[j]+b) <=t ) cnto++;
  }
  cout<<cnta<<endl;
    cout<<cnto<<endl;
   
}

int main(){
   optimize ();
    solve();
   
return 0;
}


