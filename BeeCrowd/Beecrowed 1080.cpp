// https://judge.beecrowd.com/en/problems/view/1080

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    int hig=0;
    int pos=0;
    for(int i=0;i<=100;i++){
        
        cin>>n;
            if(n>hig){
                hig=n;
                pos=i;
                
            }        
    }
    cout<<hig<<"\n"<<pos+1<<endl;
    
    return 0;
}
