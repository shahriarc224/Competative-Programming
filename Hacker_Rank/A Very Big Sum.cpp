// https://www.hackerrank.com/challenges/a-very-big-sum/problem


#include<bits/stdc++.h>
using namespace std;

void solve(){
int n; cin>>n;
long long a[n];

for(int i=0;i<n;i++){
     cin>> a[i];
     }

    long long sum=0;
   for(int i=0;i<n;i++){
    sum=sum+a[i];
     }
    
    cout<<sum<<endl;
 }

    
int main(){
 
 solve();  
    
    return 0;
}


