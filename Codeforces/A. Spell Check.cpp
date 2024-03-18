    // 
     
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
      int t;
      cin>>t;
      while(t--){
        string a="Timur";
         sort(a.begin(), a.end());
                
        int n;
        cin>>n;
        string b;
        cin>>b;
        sort(b.begin(),b.end());
        
    cout<<(b==a ?"YES":"NO")<<endl;
      }
     
    }
