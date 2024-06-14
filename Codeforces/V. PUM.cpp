    // https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
     
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
      
      int a;cin>>a;
      
      int b=a*4;
      
      for(int i=1;i<=b;i++){
        
      if(i%4==0)cout<<"PUM"<<endl;
      else cout<<i<<" ";
        }
      
      return 0;
    }
