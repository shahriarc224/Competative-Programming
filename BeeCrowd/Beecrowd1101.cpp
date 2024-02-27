// https://judge.beecrowd.com/en/problems/view/1101

#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        int a,b,c;
        cin>>a>>b;

        if(b==0 || a==0 || a<0 || b<0)
        {
            break;
        }
        else
        {

            int sum=0;
            if(a>b)
            {

                c=a;
                a=b;
                b=c;

            }

            for(int i=a; i<=b; i++)
            {

                cout<<i<<" ";

                sum+=i;

            }
            cout<<"Sum="<<sum<<endl;

        }
    }

}
