// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K


#include<bits/stdc++.h>
using namespace std;
int main(){
  
int a[3];
for(int i=0;i<=3;i++) cin>>a[i];

sort(a,a+3);  
  cout<<a[0]<<" "<<a[2]<<endl;
  return 0;
  
}
