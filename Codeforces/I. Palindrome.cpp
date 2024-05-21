    // https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
     
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
     
     string s,a;
     cin>>s;
     
     a=s;
     reverse(s.begin(),s.end());
     
     cout<<(s==a ? "YES" : "NO" )<<endl;
     
     return 0; 
    }
