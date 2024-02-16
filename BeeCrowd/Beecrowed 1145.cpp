 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1145


#include<bits/stdc++.h>
using namespace std;

int main(){

int m,n;
int swap=0;
cin>>m>>n;

if(m>n){

    swap=m;
    m=n;
    n+swap;


}
for(int i=1;i<=n;i++){

if(i%m==0){

    cout<<i<<endl;
}else{
    cout<<i<<" ";

}

}

}

