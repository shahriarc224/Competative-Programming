// https://codeforces.com/contest/266/problem/A

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n; cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]) cnt++;
	}
	
	cout<<cnt<<endl;
	
	return 0;
}
