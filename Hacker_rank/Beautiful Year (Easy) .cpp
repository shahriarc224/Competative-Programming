

// https://www.hackerrank.com/contests/practice-1713096494/challenges/beautiful-year-easy

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

string a;
cin>>a;

sort(a.begin(),a.end());

int b=unique(a.begin(),a.end())-a.begin();

if(b==a.size()){
  
  cout<<"YES"<<endl;
  
}else cout<<"NO"<<endl;

return 0;

}
