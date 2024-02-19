 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://codeforces.com/contest/1926/problem/A


#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){
    string a;
    int cnt1=0;
    int cnt2=0;
cin>>a;

    for(int i=0;i<=5;i++){

        if(a[i]=='A'){

            cnt1++ ;
         } else if(a[i]=='B'){
              cnt2++ ;
              }

    }
    if(cnt1>cnt2){

    cout<<"A"<<endl;
    }else{

    cout<<"B"<<endl;
    }

}


}

