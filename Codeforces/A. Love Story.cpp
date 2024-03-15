// https://codeforces.com/contest/1829/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    char a[10] = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
       char b[10];
    int cnt=0;
    for(int i=0;i<10;i++){
      cin>>b[i];
    }
    for(int i=0;i<10;i++){
      if(b[i]!=a[i])
      cnt++;
    }

    cout<<cnt<<endl;

  }



}
