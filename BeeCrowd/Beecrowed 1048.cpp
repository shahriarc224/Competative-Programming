//https://www.beecrowd.com.br/judge/en/problems/view/1048

#include<bits/stdc++.h>
using namespace std ;

int main(){
    
   double a;
   cin>>a;
    if(a>0 && a<=400.00){
        
        double b=((15*a)/100);
        double c=b+a;
        
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<c<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
        cout<<"Em percentual: 15 %"<<endl;
   
    }else  if(a>=400.01 && a<=800.00){
        
        double d=((12*a)/100);
        double e=d+a;
        
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<e<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<d<<endl;
        cout<<"Em percentual: 12 %"<<endl;
   
    }
    else  if(a>=800.01 && a<=1200.00){
        
        double f=((10*a)/100);
        double g=f+a;
        
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<g<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<f<<endl;
        cout<<"Em percentual: 10 %"<<endl;
   
    }
    else  if(a>=1200.01 && a<=2000.00){
        
        double h=((7*a)/100);
        double i=h+a;
        
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<i<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<h<<endl;
        cout<<"Em percentual: 7 %"<<endl;
   
    }
    else  if(a>=2000.00){
        
        double j=((4*a)/100);
        double k=j+a;
        
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<k<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<j<<endl;
        cout<<"Em percentual: 4 %"<<endl;
   
    }
    
}
