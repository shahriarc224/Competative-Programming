/*
// https://judge.beecrowd.com/en/problems/view/1151

source link : https://mamun-amin.blogspot.com/2016/03/solution-of-uri-1151-easy-fibonacci.html

aita pari nai ...............

*/

/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>
int main()
{
    int x,y, a=0,b=1,c=0;
    scanf("%d", &x);
    for(y=1; y<x; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

// My solve 

 /*

 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                                Bismillahir Rahmanir Raheem
                                      "In the name of God, Most Gracious, Most Merciful


                Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
                llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://judge.beecrowd.com/en/problems/view/1151


#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

if(n<46){
    
    int a[100];

a[0]=0;
a[1]=1;
cout<<a[0]<<" "<<a[1];
for(int i=2;i<n;i++){

a[i]=a[i-1]+a[i-2];

cout<<" "<<a[i];
}

    
}else{
    
    
    
}


}




