//https://www.beecrowd.com.br/judge/en/problems/view/1038

#include<bits/stdc++.h>
using namespace std;
int main(){

int a;
cin>>a;
float b;
cin>>b;

if(a==1){

float c=b*(float)4.00;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<c<<endl;

}else if(a==2){
float d=b*(float)4.50;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<d<<endl;


}else if(a==3){

float e=b*(float)5.00;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<e<<endl;

}else if(a==4){

float f=b*(float)2.00;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<f<<endl;

}else if(a==5){
float g=b*(float)1.50;
cout<<fixed<<setprecision(2)<<"Total: R$ "<<g<<endl;


}

}


