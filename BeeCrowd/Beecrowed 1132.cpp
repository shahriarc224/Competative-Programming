
// https://judge.beecrowd.com/en/problems/view/1132

#include<bits/stdc++.h>
using namespace std;
int main(){
    
	int a,b,sum=0,s;
	cin>>a>>b;
    
	if(a>b){
   	 
    	s= b;
    	b= a;
    	a= s;
   	 
	}
    
	for(int i=a;i<=b;i++){
   	 
if(i%13!=0){
    
	sum=sum+i;
    
}
	}
    
	cout<<sum<<endl;
    
    
}
