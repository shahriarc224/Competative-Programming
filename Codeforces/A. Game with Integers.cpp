// https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){
  optimize ();
  int t;cin>>t;
  while(t--){
     int a;cin>>a;
    cout<<(a%3==0? "Second" : "First" )<<endl;
  }
return 0;
}



