//https://www.beecrowd.com.br/judge/en/problems/view/1046

#include<bits/stdc++.h>
using namespace std ;
int main(){
    
    /*hour a,c
    minutes b.d
    
    */
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(a>12 || c<12 && b>60 ||d<60 ){
        
        int x=(24-a)+c;
        int g=(60-b)+d;
        cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<g<<" MINUTO(S)"<<endl;
        
    }
    else if(a<12 || c>12 && b<60 ||d>60) {
        
     int z=c-a;
     
     int h=d-b;
        cout<<"O JOGO DUROU "<<z<<" HORA(S) E "<<h<<"MINUTO(S)"<<endl;

    }
    
}
