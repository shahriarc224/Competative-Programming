// https://judge.beecrowd.com/en/problems/view/1173

// source link : https://github.com/gmendonca/uri-problem-solutions/blob/master/1173.cpp
#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i = 0; i < 10; i++){
            std::cout << "N[" << i << "] = " << n << "\n";
            n *= 2;
    }
    return 0;
}

// My code :


#include<bits/stdc++.h>
using namespace std;

int main(){

int a;
cin>>a;

for(int i=1;i<=9;i++){


    cout<<"N["<<i<<"] = "<<a<<endl;
a*= 2;
}

}

