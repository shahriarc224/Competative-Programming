//  https://www.hackerrank.com/contests/practice-1713096494/challenges/what-are-the-divisors

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

ll a;
cin>>a;

for(int i=1;i<=a;i++){
  
  if(a%i==0){
  cout<<i<< " ";
}

}

cout<<endl;
return 0;

}
