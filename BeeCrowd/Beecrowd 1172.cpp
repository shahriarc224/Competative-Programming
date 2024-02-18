


// https://judge.beecrowd.com/en/problems/view/1172

// ai code ta run time error dekhay but code ta hoise

// source link :

#include<stdio.h>
int main()
{
    int x[10],i;

    for(i=0;i<10;i++)
    {
   	 scanf("%d",& x[i]);
    }
    for(i=0;i<10;i++)
    {
   	 if(x[i]<=0)
   	 x[i]=1;
    }
    for(i=0;i<10;i++)
    {
   	 printf("X[%d] = %d\n",i,x[i]);
    }
    return 0;
}

…………………………………………………………………………………………………………


// amar code 

// https://judge.beecrowd.com/en/problems/view/1172

#include<bits/stdc++.h>
using namespace std;

int main(){
int a[10];

for(int i=1;i<=10;i++){
	cin>>a[10];
}

for(int i=1;i<=10;i++){

if(a[i]==0){

cout<<"X["<<i<<"] = "<<"1"<<endl;

}
else if(a[i] < 0){

	cout<<"X["<<i<<"] = "<<"1"<<endl;

}else {

cout<<"X["<<i<<"] = "<<a[i]<<endl;
}
}
}

