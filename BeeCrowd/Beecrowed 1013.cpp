//https://www.beecrowd.com.br/judge/en/problems/view/1013

/* ai code tar source    https://www.codeshikhi.com/2020/10/uri-1013-the-greatest-solution-in-c-cpp-cpluscplus-python.html */

#include<bits/stdc++.h>                                                                                                                                          
    using namespace std;
    int main(){
        int a,b,c,MaiorAB,s,MAX;
        cin>>a>>b>>c;
        MaiorAB=(a+b+abs(a-b))/2;
        MAX=(MaiorAB+c+abs(MaiorAB-c))/2;
        cout<< MAX<<" eh o maior"<<endl;
        return 0;
    }

