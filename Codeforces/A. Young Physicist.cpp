/*                                 			 
 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                            	Bismillahir Rahmanir Raheem
                                 	"In the name of God, Most Gracious, Most Merciful
              			 
              			 
  			  Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
  			  llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();

 int t;cin>>t;
 int a,b,c;
 int suma=0,sumb=0,sumc=0;
 while(t--){
 	cin>>a>>b>>c;
 	
 	suma+=a;
 	sumb+=b;
 	sumc+=c;
 	
 }
if(suma==0 && sumb==0 && sumc==0 )cout<<"YES"<<endl;
 	else cout<<"NO"<<endl;

return 0;

}

















