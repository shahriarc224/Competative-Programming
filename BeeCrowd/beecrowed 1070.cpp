/*

********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                               Bismillahir Rahmanir Raheem
                                     "In the name of God, Most Gracious, Most Merciful


               Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
               llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1070


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin>>a;

    if(a%2!=0)
    {

        for(int i=a; i<a+12; i+=2)
        {


            cout<<i<<endl;

        }
    }

    else if(a%2==0)
    {

        for(int i=a+1; i<a+12; i+=2)
        {


            cout<<i<<endl;
        }


    }



}

