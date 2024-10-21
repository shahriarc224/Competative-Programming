// https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true


#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef double dl;


#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


void solve(){
 int n; cin>>n;


   for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
           cout<<" ";
       }
           for(int k=1;k<=i;k++){
               cout<<"#";
           }
      
   cout<<endl;
   }
  
}




int main(){


  optimize ();


   solve();
  
return 0;
}
