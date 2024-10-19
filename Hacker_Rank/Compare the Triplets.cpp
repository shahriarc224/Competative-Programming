// https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include<bits/stdc++.h>
using namespace std;
int main(){
int a[3];
    int b[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
    }
   for(int i=0;i<3;i++){
        cin>>b[i];
    }

    
    int alice=0,bob=0,noone=0;
    
    if(a[0]>b[0]) alice++;
    else if(a[0]<b[0]) bob++;
    else if(a[0]==b[0]) noone++;
    
   if(a[1]>b[1]) alice++;
    else if(a[1]<b[1]) bob++;
    else if(a[1]==b[1]) noone++;

    if(a[2]>b[2]) alice++;
    else if(a[2]<b[2]) bob++;
    else if(a[2]==b[2]) noone++;

    cout<<alice<<" "<<bob<<endl;
    return 0;
}
