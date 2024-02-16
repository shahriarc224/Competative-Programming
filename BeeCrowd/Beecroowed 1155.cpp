// https://judge.beecrowd.com/en/problems/view/1155

#include<bits/stdc++.h>
using namespace std ;
int main(){
    
double s=0;
    for(int i=1;i<=100;i++){
        
        s+=1.0/(double)i;
        
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
}
