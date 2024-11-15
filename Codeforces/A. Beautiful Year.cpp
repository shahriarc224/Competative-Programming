// https://codeforces.com/contest/271/problem/A

#include<bits/stdc++.h>
using namespace std ;

void solve(){
int n; cin>>n;
    for(int i=n+1;i<12345;i++){
        string str_a=to_string(i);
        set<char>unique_degit(str_a.begin(),str_a.end());
        if(unique_degit.size()==str_a.length()){
            cout<<i<<endl;
            break ;
        }
    }
}

int main(){
solve();
    return 0;
}
