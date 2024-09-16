// https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t; cin>>t;
	string s;
	while(t--){
	cin>>s;
	int n=s.size();
	if(n<=10) cout<<s<<endl;
		else {
			cout<<s[0]<<n-2<<s[n-1]<<endl;
			
		}
	}
	
	return 0;
}
