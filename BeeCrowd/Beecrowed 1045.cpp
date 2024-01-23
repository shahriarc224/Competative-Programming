/* ai code ta pari nai 

source code:

code:






*/


//https://www.beecrowd.com.br/judge/en/problems/view/1045

#include<bits/stdc++.h>
using namespace std ;

int main()

{
    
   double A,B,C;
    
    cin>>A>>B>>C;
    
    
   if(A >=B + C){
       
       cout<<"NAO FORMA TRIANGULO"<<endl;
       
   }if((A*A)==(B*B) + (C*C)){
       
       cout<<"TRIANGULO RETANGULO"<<endl;
   
}if((A*A)>(B*B)+(C*C)){
       
       cout<<"TRIANGULO OBTUSANGULO"<<endl;
   
}if((A*A)<(B*B)+(C*C)){
       
       cout<<"TRIANGULO ACUTANGULO"<<endl;
   
}if(A==B==C){
       
       cout<<"TRIANGULO EQUILATERO"<<endl;
       
   
}if(A==B || B==C ||C==A){
       
       cout<<"TRIANGULO ISOSCELES"<<endl;
   
}



}
