 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

//  https://www.beecrowd.com.br/judge/en/problems/view/1064


#include<bits/stdc++.h>

using namespace std;

int main(){


  float a[6];
  for(int i=0;i<6;i++){

        cin>>a[i];
  }

  float av ;
  float n=0;
    int cnt=0;
   for(int i=0;i<6;i++){

       if(a[i]>0){

        cnt++;

        }
        if(a[i]>0){

      n=n+a[i];

       av=n/cnt;

        }
   }
    cout<<cnt<<" valores positivos"<<endl;

    cout<<fixed<<setprecision(1)<<av<<endl;



}



