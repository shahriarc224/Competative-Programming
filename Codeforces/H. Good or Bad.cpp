    //  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
     
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
      int t;cin>>t;
      while(t--){
        string s; cin>>s;
        
        int a=s.find("010");
        int b=s.find("101");
      
        if(a!=string::npos || b!=string::npos  )cout<<"Good"<<endl;
        else cout<<"Bad"<<endl;
        
      }
      return 0;
    }
