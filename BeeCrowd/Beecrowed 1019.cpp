
//https://www.beecrowd.com.br/judge/en/problems/view/1019

#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int N;
    cin>>N;
    
    
    int a=N/3600;
    
    int b=N-(a*3600);
    
    int c=b/60;
    int d=b-(c*60);

    cout<<a<<":"<<c<<":"<<d<<endl;
    
    
}

