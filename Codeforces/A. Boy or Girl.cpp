// https://codeforces.com/problemset/problem/236/A

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
    string s2;
    int sz=s.size();
  sort(s.begin(),s.end());

    for(int i=0;i<sz;i++){
        if(s[i]==s[i+1]) continue;
        else s2.push_back(s[i]);
    }

    int sz2=s2.size();
 
   if(sz2%2==0) cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;
return 0;
}



