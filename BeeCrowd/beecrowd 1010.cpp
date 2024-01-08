//https://www.beecrowd.com.br/judge/en/problems/view/1010

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int  a,b,d,e;
    float c,f;
    
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    
    float g=(b*c)+(e*f);
    
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<g<<endl;
    
}
