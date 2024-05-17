    // https://codeforces.com/problemset/problem/1896/A
     
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int t;cin>>t;
    while(t--){
    int a; cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
    cin>>v[i];
    }
    cout<<(v[0]==1 ? "YES" : "NO" )<<endl;
     
    }
    return 0;
    }
