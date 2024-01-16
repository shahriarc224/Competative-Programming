//https://www.beecrowd.com.br/judge/en/problems/view/1020

#include<bits/stdc++.h>
using namespace std ;

int main(){

int n;
cin>>n;

int a=n/365;
int b=n%365;

int c=b/30;
int d=b%30;


cout<<a<<" ano(s)"<<endl;
    cout<<c<<" mes(es)"<<endl;
cout<<d<<" dia(s)"<<endl;

}
