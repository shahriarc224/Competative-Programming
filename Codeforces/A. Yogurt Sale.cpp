// https://codeforces.com/problemset/problem/1955/A
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double dl;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
int main() {
	optimize ();
 
 int t; cin>>t;
    while(t--){
    int ans; int d;
     int n,a,b;
        cin>>n>>a>>b;
       if(b>2*a) cout<<a*n<<endl;
        else cout<<(n/2)*b+(n%2)*a<<endl;
        }
	return 0;
}
 
