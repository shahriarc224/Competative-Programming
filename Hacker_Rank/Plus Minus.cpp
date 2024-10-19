//https://www.hackerrank.com/challenges/plus-minus/problem

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
       int a[n];
        for(int i=0;i<n;i++){
         cin>>a[i];
       } 

    double zero=0,pos=0,neg=0;
      for(int i=0;i<n;i++){
         if(a[i]==0) zero++;
          else if(a[i]>0) pos++;
           else if(a[i]<0) neg++;
       
       }

        pos=pos/n;
         neg=neg/n;
          zero=zero/n;
    
    cout<<fixed<<setprecision(6)<<pos<<endl;
     cout<<fixed<<setprecision(6)<<neg<<endl;
      cout<<fixed<<setprecision(6)<<zero<<endl;
    
    
}

int main(){

    solve();
    
}
