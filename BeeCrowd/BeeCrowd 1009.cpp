//https://www.beecrowd.com.br/judge/en/problems/view/1009

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    double b,c;
    cin>>b>>c;
    double total =(((15*c)/100)+b);
    
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
