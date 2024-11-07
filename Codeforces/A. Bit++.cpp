// https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
    string s;
    int cnt=0;
   while(n--){
    cin>>s;
       if(s[0]=='+' || s[2]=='+'){
           cnt++;
       } else {
           cnt--;
       }
   }
    cout<<cnt<<endl;
    return 0;
}
