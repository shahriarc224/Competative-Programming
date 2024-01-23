//https://www.beecrowd.com.br/judge/en/problems/view/1046

#include<bits/stdc++.h>
using namespace std ;
int main(){
    
    int a,b;
    cin>>a>>b;
    
    if(a>12 || b<12){
        
        int d=(24-a)+b;
        cout<<"O JOGO DUROU "<<d<<" HORA(S)"<<endl;
        
    }
    else if(a<12 || b>12) {
        
     int f=b-a;
      cout<<"O JOGO DUROU "<<f<<" HORA(S)"<<endl;

    }
    
}
