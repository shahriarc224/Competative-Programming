//https://www.beecrowd.com.br/judge/en/problems/view/1043

#include<bits/stdc++.h>
using namespace std;
int main()
{
   float a,b,c;
   cin>>a>>b>>c;
   
   if(a<(b+c)&&b<(a+c)&&c<(a+b)){
       
       float d=a+b+c;
       
       cout<<fixed<<setprecision(1)<<"Perimetro = "<<d<<endl;
   
       
   }else{
       
       float e=0.5*(a+b)*c;
       
       cout<<fixed<<setprecision(1)<<"Area = "<<e<<endl;
       
       
   }
    
    
}
