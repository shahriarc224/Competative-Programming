// https://judge.beecrowd.com/en/problems/view/1045

//ai problem ta pari nai 

// source link : https://www.codeshikhi.com/2020/12/uri-1045-triangle-types-solution-in-c-cpp-cpluscplus-python.html

#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;

    cin >> a >> b >> c;

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         cout << "NAO FORMA TRIANGULO"<<endl;
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           cout << "TRIANGULO RETANGULO"<<endl;
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           cout << "TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           cout << "TRIANGULO ACUTANGULO"<<endl;
    if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO"<<endl;
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES"<<endl;

return 0;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// My code :

        
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a >= (b+c))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    if(a*a == (b*b+c*c))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a == b && b == c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(a == b || b == c ||a == c )
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

}






        
        
