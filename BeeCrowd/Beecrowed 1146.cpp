/*
// https://judge.beecrowd.com/en/problems/view/1146

aita pari nai ************************

source code link :  https://www.codeshikhi.com/2023/01/uri-bee-crowd-1146-growing-sequences-solution-in-c-cpp-python-javascript.html
*/ 

#include <iostream>

using namespace std;

int main(){
    
    int n;
    
    while(true){
                cin >> n;
                if(n == 0) break;
                for(int i = 1; i <= n; i++){
                        cout << i;
                        cout << ((i == n) ? "\n" : " ");   /* jodi i==n condition ta sotto hoy 
                                                           tahole "\n" e jabe nahole " " space dibe */ 
                }
    }
    return 0;
}
