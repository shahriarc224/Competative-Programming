// https://judge.beecrowd.com/en/problems/view/2152
// ai code ta pari nai 
// sourtce link: https://mamun-amin.blogspot.com/2016/07/solution-of-uri-2152-pepe-i-already.html

/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>

int main()
{
    int tst, h, m, o;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d %d", &h, &m, &o);
        if(h<10) printf("0%d:", h);
        else printf("%d:", h);
        if(m<10) printf("0%d", m);
        else printf("%d", m);
        if(o == 0) printf(" - A porta fechou!\n");
        else printf(" - A porta abriu!\n");
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////


// my code
 
// https://judge.beecrowd.com/en/problems/view/2152

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int a,b,c;
    cin>>a>>b>>c;
if(c==0 || b==0){
    cout<<a<<":"<<b<<" - A porta fechou!"<<endl;
        } else{
    cout<<a<<":"<<b<<" - A porta abriu!"<<endl;
        }
}
}



