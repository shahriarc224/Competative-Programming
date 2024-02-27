// https://judge.beecrowd.com/en/problems/view/1099

#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int c,sum=0;
    if(a>b){
       c=a;
       a=b;
       b=c;
       }

    for(int i=a+1;i<b;i++){
        if(i%2!=0){

            sum+=i;
        }
}
cout<<sum<<endl;
}

}
