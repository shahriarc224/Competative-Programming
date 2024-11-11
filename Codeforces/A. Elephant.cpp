// https://codeforces.com/problemset/problem/617/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl; 

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();
 int n; cin>>n;
 
    if(n%5==0) cout<<n/5<<endl;
      else cout<<(n/5)+1<<endl;
return 0;

}



