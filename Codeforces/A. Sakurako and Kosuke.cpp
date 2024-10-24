//  https://codeforces.com/contest/2033/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve(){
    int n; cin>>n;
   cout<<(n%2==0 ? "Sakurako":"Kosuke")<<endl;
}

int main(){
   optimize ();

    int t; cin>>t;
    while(t--){
        solve();
    }
return 0;

}

