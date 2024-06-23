// https://codeforces.com/contest/1742/problem/A

#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        if (a[0] + a[1] == a[2] || a[1] + a[2] == a[0] || a[2] + a[0] == a[1]) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
