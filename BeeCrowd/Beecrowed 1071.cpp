 /*

*********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1071


#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b;
int sum =0;
cin>>a>>b;
for(int i=b+1;i<a;i++){

    if(i%2!=0){

        sum=sum+i;

        }

}

cout<<sum<<endl;

}

