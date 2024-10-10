// https://codeforces.com/problemset/problem/58/A

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
   
    string a="hello";
   int j=0;
    for(int i=0;i<s.size();i++){
    if(a[j]==s[i]){
        j++;
        if(j==5){ 
            cout<<"YES"<<endl;
                 return 0;
                } 
            }
        }
     cout<<"NO"<<endl;
  
     return 0;
}


