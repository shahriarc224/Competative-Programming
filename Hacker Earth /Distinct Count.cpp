// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/

#include<bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){
int n,x;cin>>n>>x;
vector<int>v(n);

for(int i=0;i<v.size();i++){
cin>>v[i];
}

sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();

if(sz==x)cout<<"Good"<<endl;
else if(sz<x)cout<<"Bad"<<endl;
else cout<<"Average"<<endl;
}

	
}
