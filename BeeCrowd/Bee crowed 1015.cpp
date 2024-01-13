//https://www.beecrowd.com.br/judge/en/problems/view/1015

#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a,b;
    double c,d;
    cin>>a>>b>>c>>d;

    double e=sqrt(pow(c - a, 2) + pow(d- b, 2));



    cout<<fixed<<setprecision(4)<<e<<endl;
}
