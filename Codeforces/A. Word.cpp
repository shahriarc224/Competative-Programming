// https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();
string s; cin>>s;
int upper=0,lower=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) upper++;
        else lower++;
    }
  if(lower>=upper) {
      for(char& ch: s){
          ch=tolower(ch);
      }
  }  else {
      for(char& ch: s){
          ch=toupper(ch);
      }
  }

    cout<<s<<endl;
    
    
return 0;

}
