// https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main() {

	optimize ();

	string a,b;

	cin>>a>>b;

	for(int i=0; i<a.size(); i++) a[i]= tolower(a[i]);
	for(int i=0; i<b.size(); i++) b[i]= tolower(b[i]);

	if(a<b)cout<<"-1"<<endl;
	else if(a>b)cout<<"1"<<endl;
	else cout<<"0"<<endl;

	return 0;

}
