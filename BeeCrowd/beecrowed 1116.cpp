// https://judge.beecrowd.com/en/problems/view/1116

#include<bits/stdc++.h>
using namespace std ;
int main(){

    int t;
    cin>>t;
    while(t--){

        int x,y;
    cin>>x>>y;

   if(y==0){

       cout<< "divisao impossivel" <<endl;
   } else {

      // float s=(x/y);
       cout<<((float)x/(float)y)<<fixed<<setprecision(1)<<endl;

   }


    }
}
