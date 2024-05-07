// https://codeforces.com/contest/1873/problem/B

/*                                 			 
 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                            	Bismillahir Rahmanir Raheem
                                 	"In the name of God, Most Gracious, Most Merciful
              			 
              			 
  			  Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
  			  llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();
int t;
cin>>t;
while(t--){
  
  int n;
  cin>>n;
  
  ll a[n];
  
  for(int i=0;i<n;i++){
    
    cin>>a[i];
    
  }
  
  sort(a,a+n);
  
  a[0]=a[0]+1;
  
  ll ans=1;
  
  for(int i=0;i<n;i++){
    
   ans=ans*a[i];
    
  }
  
  cout<<ans<<endl;
  
}

return 0;

}



