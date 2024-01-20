//https://www.beecrowd.com.br/judge/en/problems/view/1037

#include<bits/stdc++.h>
using namespace std;
int main(){

float a;
cin>>a;

if(a<0 ||a>100){

cout<<"Fora de intervalo"<<endl;

}else if (a>=0 &&25>=a){

cout<<"Intervalo [0,25]"<<endl;

}else if (a>25 &&50>=a){

cout<<"Intervalo (25,50]"<<endl;

}else if (50>0 &&75>=a){

cout<<"Intervalo (50,100]"<<endl;
}else if (75>0 &&100>=a){

cout<<"Intervalo (75,100]"<<endl;
}

}
