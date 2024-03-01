//  https://judge.beecrowd.com/en/problems/view/2786

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int l,c,a,b;
    cin>>l>>c;

    a=(l*c)+((l-1)*(c-1));
    b=((l-1)*2)+((c-1)*2);

    cout<<a<<endl;
    cout<<b<<endl;

}
