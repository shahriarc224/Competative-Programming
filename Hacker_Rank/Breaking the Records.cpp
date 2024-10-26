// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void solve(){
int n; cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int mxarr=arr[0],minarr=arr[0];
int mxcnt=0, mincnt=0;

for(int i=0;i<n;i++){

if(mxarr<arr[i]){
mxarr=arr[i];
mxcnt++;
}

if(minarr>arr[i]){
minarr=arr[i];
mincnt++;
}
}
cout<<mxcnt<<" "<<mincnt<<endl;

}
int main(){

   optimize ();
solve();

return 0;

}
