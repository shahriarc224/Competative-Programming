// https://codeforces.com/contest/381/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main() {

   optimize ();
   int n;
   cin>>n;
   int f=1;
   int s=0,d=0;
   vector<int>v(n);

   for(int i=0; i<n; i++) cin>>v[i];

   if(f==1) {
      if(v[0]>v[v.size()-1]) {
         s+=v[0];
         v.erase(v[0]);
      } else {
         s+=v.end();
         v.erase(v.end());
       
      }
        f=2;
   } else {
       if(v[0]>v.end()){
         d+=v[0];
         v.erase(v[0]);
       } else {
         d+=v.end();
           v.erase(v.end());
       }

      f=1;
   }

cout<<s<<" "<<d<<endl;

   return 0;

}


