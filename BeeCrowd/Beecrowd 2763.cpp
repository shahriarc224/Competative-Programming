// https://judge.beecrowd.com/en/runs/code/37711458
// I have no idea why my code is showing 5% error 

// source link : https://github.com/MDNoorUddin/Uri-Onlinejudge-Solutions/blob/master/2763.cpp
//source code :
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='0'&&str[i]<='9')cout<<str[i];
		else cout<<endl;
	}
	cout<<endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// MY CODE :


// https://judge.beecrowd.com/en/problems/view/2763

#include<bits/stdc++.h>
using namespace std;

int main(){

string a;
getline(cin,a);

for(int i=0;i<=a.size();i++){
    if(a[i]=='.' || a[i]=='-'){
    cout<<endl;
    continue ;
    }
    cout<<a[i];

}
  cout<<endl;
}




