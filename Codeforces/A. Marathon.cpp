// https://codeforces.com/contest/1692/problem/A


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();

int t; cin>>t;
while(t--){
	
	int a; cin>>a;
	int arr[3];
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	int cnt=0;
	for(int i=0;i<3;i++){
		if(a<arr[i]) cnt++;
	}
	cout<<cnt<<endl;

}
return 0;

}

