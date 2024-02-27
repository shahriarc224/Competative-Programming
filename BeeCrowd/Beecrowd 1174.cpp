// https://judge.beecrowd.com/en/problems/view/1174

#include<bits/stdc++.h>
using namespace std;
int main(){

double A[100];

for(int i =0;i<=99;i++){
cin>>A[i];
}
for(int i=0;i<=99;i++){

  if(A[i]<=10.0) cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<A[i]<<endl;
}

return  0;

}



