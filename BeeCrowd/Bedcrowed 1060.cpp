//https://www.beecrowd.com.br/judge/en/problems/view/1060

#include<bits/stdc++.h>
using namespace std;
int main(){

    float a[6];
  for(int i=0;i<6;i++){

        cin>>a[i];
  }
    int cnt=0;
   for(int i=0;i<6;i++){

       if(a[i]>0){

        cnt++;
    }
   }
    cout<<cnt<<" valores positivos"<<endl;
}
