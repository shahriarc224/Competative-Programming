// https://codeforces.com/contest/1999/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    string s;
    cin>>s;
   
   int a=stoi(s);
   int b=a/10;
   int c=a%10;
  
  long long d=b+c; cout<<d<<endl; 
  }
}

/*
 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    string s;
    cin>>s;
   
   long long b=s[0]-'0';
   long long c=s[1]-'0';
    
   long long a=b+c;
    
    cout<<a<<endl; 
  }
}


*/
