// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  
  int b=a[0];
  
  
   if (b >= 48 && b <= 57) {
        cout << "IS DIGIT" << endl;
    } else if (b >= 65 && b <= 90) {
        cout << "ALPHA"<<endl;
        cout<<"IS CAPITAL" << endl;
    } else if (b >= 97 && b <= 122) {
        cout << "ALPHA"<<endl;
        cout<<"IS SMALL" << endl;
    }

  
}
