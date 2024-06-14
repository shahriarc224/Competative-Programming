    // https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
     
    #include<bits/stdc++.h>
    using namespace std;
     int main(){
       
       string a,b;
       cin>>a;
       
       b=a;
       reverse(a.begin(),a.end());
      
      int d=stoi(a);
      cout<<d<<endl;
      
       if(a==b){
         cout<<"YES"<<endl;
       }else cout<<"NO"<<endl;
       
       return 0;
     }
