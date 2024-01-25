
//ai code ta hou nai .[problem solve korte pari nai ]

//https://www.beecrowd.com.br/judge/en/problems/view/1051

#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a;
    cin>>a;

    if(a>=0.00 && a<=2000.00){


        cout<<"Isento"<<endl;

    }
    else if(a>=2000.01 && a<=3000.00)
    {

        int c=2000-a;

        double d=(8*c)/100;


        cout<<fixed<<setprecision(2)<<"R$ "<<d<<endl;


    }
    else if(a>=3000.01 && a<=4500.00)
    {

        int e=3000-a;

        double f=(18*a)/100;

        cout<<fixed<<setprecision(2)<<"R$ "<<f<<endl;

    }
    else if(a>4500.00)
    {

        int g=a-4500;

        double h=(28*a)/100;

        cout<<fixed<<setprecision(2)<<"R$ 1"<<h<<endl;


    }



}
