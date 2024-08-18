//  https://www.hackerrank.com/contests/practice-1713096494/challenges/count-odd-even-in-between

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

ll a,b;
cin>>a>>b;

int even =0;
int odd=0;

int swap=0;
if(a>b){
  swap=a;
  a=b;
  b=swap;
}
for(int i=a;i<=b;i++){
  
  if(i%2==0){
  
  even++;
} else odd++;
}
cout<<"Even : "<<even<<endl;
cout<<"Odd  : "<<odd<<endl;

return 0;

}
