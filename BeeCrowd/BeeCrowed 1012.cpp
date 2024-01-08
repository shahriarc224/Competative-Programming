//https://www.beecrowd.com.br/judge/en/problems/view/1012

#include<bits/stdc++.h>
using namespace std;

int main(){
 
 float A,B,C;   
    
    cin>>A>>B>>C;
    
    float triangle=0.5*A*C;
    
    float radius= 3.14159*pow(C,2);
    
    float trapezium=(A+B)/2*C;
    
    float  square=pow(B,2);
    
    float rectangle=A*B;
    
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
    
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<radius<<endl;
    
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezium<<endl;
    
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl;
    
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle<<endl;
    
}
