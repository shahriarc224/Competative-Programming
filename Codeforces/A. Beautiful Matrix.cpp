/*                                 			 
 ********************************************( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )*********************************************
                                            	Bismillahir Rahmanir Raheem
                                 	"In the name of God, Most Gracious, Most Merciful
              			 
              			 
  			  Allahumma anta rabbi la ilaha illa anta, ‘alaika tawakkaltu wa anta rabbul ‘arshil kareem maashaa
  			  llahu kaana wa maLam yasha’ lam yakun-wa laa hawla wa laa quwwata illaa billaahil ‘aliyyil ‘azeem


*/

// https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

   optimize ();
    int x=0;
 for(int i=1;i<=5;i++){
	for(int j=1;j<=5;j++ ){
		cin>>x;
		if(x==1) cout<<abs(i-3)+abs(j-3)<<endl;
	}
}

return 0;

}






