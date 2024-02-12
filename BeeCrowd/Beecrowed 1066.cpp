// https://judge.beecrowd.com/en/problems/view/1066

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int a[5];
    int cnt1=0;
       int cnt2=0;
          int cnt3=0;
             int cnt4=0;


    for(int i=0;i<5;i++){

        cin>>a[i];

    }

    for(int i=0;i<5;i++){


if(a[i]%2==0){

    cnt1++;

}

if(a[i]%2!=0){

    cnt2++;


}
if(a[i]>0){
    cnt3++;

}
if(a[i]<0){
    cnt4++;

}
    }
      cout<<cnt1<<" valor(es) par(es)"<<endl;
       cout<<cnt2<<" valor(es) impar(es)"<<endl;
         cout<<cnt3<<" valor(es) positivo(s)"<<endl;
           cout<<cnt4<<" valor(es) negativo(s)"<<endl;
}
