//https://www.beecrowd.com.br/judge/en/problems/view/1005

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float A,B;
    
    cin>>A>>B;
    
    float media=(A*3.5+B*7.5)/(3.5+7.5);
    
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<media<<endl;
    
    return 0;
}
