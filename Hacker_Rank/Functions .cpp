// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std ;

int solve(int a,int b ,int c, int d){
    
    if(a>b && a>c && a>d) return a;
    else if(b>a && b>c && b>d ) return b;
    else if(c>a && c>b && c>d) return c;
    else return d;
    
    
}


int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    cout<<solve(a,b,c,d)<<endl;
    
}


