 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1051


#include<bits/stdc++.h>
using namespace std;

int main(){

double n,a,b,c;

cin>>n;

if(n<2000.00){

    cout<<"Isento"<<endl;
}
else if(n>=2000.01 && n<=3000.00){

        a=(n - 2000.00)*0.08;
    cout<<"R$ "<<fixed<<setprecision(2)<<a<<endl;
}
else if(n>3000.01 && n<=4500.00){

        b=(n - 3000.00)*0.18 + 1000.00*0.08;
    cout<<"R$ "<<fixed<<setprecision(2)<<b<<endl;
}
else if(n>4500.00){

    c=(n - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08;
    cout<<"R$ "<<fixed<<setprecision(2)<<c<<endl;
}

}

