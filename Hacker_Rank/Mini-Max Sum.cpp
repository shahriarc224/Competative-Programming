// https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true


#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef double dl;


#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


void solve(){
 ll arr[5];
  for(int i = 0; i< 5 ; i++){
     cin>>arr[i];
 }
// int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + 5);


cout<<arr[0]+arr[1]+arr[2]+arr[3]<<" ";
cout<<arr[1]+arr[2]+arr[3]+arr[4];
  
}




int main(){


  optimize ();


   solve();
  
return 0;
}
