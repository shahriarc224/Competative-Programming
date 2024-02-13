 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1074


#include<bits/stdc++.h>
using namespace std;

int main(){

int n;

cin>>n;
int a[n];
for(int i=0;i<n;i++){

    cin>>a[i];

    if(a[i]%2==0 && a[i]>0){
    cout<<"EVEN POSITIVE"<<endl;
    }
     if(a[i]%2==0 && a[i]<0){
    cout<<"EVEN NEGATIVE"<<endl;
    } if(a[i]%2!=0 && a[i]<0){
    cout<<"ODD NEGATIVE"<<endl;
    } if(a[i]%2!=0 && a[i]>0){
    cout<<"ODD POSITIVE"<<endl;
    } if(a[i]==0){
    cout<<"NULL"<<endl;
    }

}

}

