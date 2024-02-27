/**Bismillahir Rahmanir Rahim.**/
/*
ai problem ta pari nai 
source code : https://mamun-amin.blogspot.com/2016/04/solution-of-uri-1175-array-change-i.html

problem : https://judge.beecrowd.com/en/problems/view/1175

*/
#include <stdio.h>
int main()
{
   int N[20], temp,i,j;
    for(i=0; i<20; i++)
        scanf("%d",&N[i]);
    for(i=0, j=19; i<10; i++, j--)
    {
        temp=N[i];
        N[i]=N[j];
        N[j]=temp;
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,N[i]);
    return 0;
}

 /*

    // My code 

// https://judge.beecrowd.com/en/problems/view/1175

#include<bits/stdc++.h>
using namespace std;

int main(){

double A[20];

for(int i=0;i<=20;i++){
    cin>>A[20];
}

for(int i=0;i<=20;i++){
    cout<<"N["<<i<<"] = "<<A[i]/2<<endl;
}


}



