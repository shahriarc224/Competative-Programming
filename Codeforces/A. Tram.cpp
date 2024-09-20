/*                                 			 
 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                            	Bismillahir Rahmanir Raheem
                                 	"In the name of God, Most Gracious, Most Merciful
              			 
              			 
  		      Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
  		      llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();
   int t,pass=0,mx=0; cin>>t; 
  while(t--){
  		int a,b;
	   cin>>a>>b;
    
   	pass=pass-a;
   	pass=pass+b;
   	
   	mx=max(mx,pass);

  }

  cout<<mx<<endl;
return 0;

}





















