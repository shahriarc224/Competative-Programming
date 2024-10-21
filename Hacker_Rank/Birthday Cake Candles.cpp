// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve(){
    
	ll n; cin>>n;
	ll arr[n];
    
	for(int i=0;i<n;i++) cin>>arr[i];
    
	long mx;
	mx=arr[0];

	for(int i=0;i<n;i++){
    	if(mx<arr[i]){
        	mx=arr[i];
    	}
	}
	long cnt =0;

	for(int i=0;i<n;i++){
    	if(arr[i]==mx){
        	cnt++;
    	}
	}
	cout<<cnt<<endl;
}
int main(){
  optimize ();
	solve();
    return 0;
}


