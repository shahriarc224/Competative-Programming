//  https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int t;
  cin>>t;
  
   int neg=0;
  int pos=0;
  int eve=0;
  int odd=0;
  
  while(t--){
    
  int a;
  cin>>a;
 
  
  
if(a<0)neg++;
if(a>0)pos++;
if(a%2==0)eve++;
if(a%2!=0)odd++;

 
    
  }
   cout<<"Even: "<<eve<<endl;
  cout<<"Odd: "<<odd<<endl;
  cout<<"Positive: "<<pos<<endl;
  cout<<"Negative: "<<neg<<endl;
  
  
}


