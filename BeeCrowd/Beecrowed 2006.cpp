/*
********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem

*/

// https://judge.beecrowd.com/en/problems/view/2006


#include<bits/stdc++.h>
using namespace std;

int main()
{


    int a,cnt=0;
    cin>>a;
    int b[5];

    for(int i=0; i<5; i++)
    {
        cin>>b[i];

        if(b[i]==a)
        {

            cnt++;

        }

    }
    cout<<cnt<<endl;
}

