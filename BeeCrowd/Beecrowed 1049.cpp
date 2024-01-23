/*

source code:   https://www.codeshikhi.com/2020/12/uri-1049-animal-solution-in-c-cpp-cpluscplus-python.html

*/

// code:

#include<bits/stdc++.h>
using namespace std;

int main()
{
 string c;

 cin >> c;

 if(c == "vertebrado"){
  
  cin >> c;
  if(c == "ave"){

   cin >> c;
   if(c == "carnivoro"){
    cout << "aguia" << endl;
   }else{
    cout << "pomba" << endl;
   }
  }else{

   cin >> c;
   if(c == "onivoro"){
    cout << "homem" << endl;
   }else{
    cout << "vaca" << endl;
   }
  }
 }else{

  cin >> c;
  if(c == "inseto"){

   cin >> c;
   if(c == "hematofago"){
    cout << "pulga" << endl;
   }else{
    cout << "lagarta" << endl;
   }
  }else{

   cin >> c;
   if(c == "hematofago"){
    cout << "sanguessuga" << endl; 
   }else{
    cout << "minhoca" << endl;
   }
  }
 }
 return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// i dont know why this code is not working properly 

//https://www.beecrowd.com.br/judge/en/problems/view/1049

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string a,b,c;
    
    cin>>a>>b>>c;
    
    if (a=="vertebrado")
    {
        if (b=="ave"){
            
            if(c=="carnivoro"){
                
                cout<<"aguia"<<endl;
                
                }else if(c=="onivoro"){
                    
                   cout<<"pomba"<<endl; 
                    
                }
            }
            
        }else if(b=="mamifero"){
            
            if(c=="onivoro"){
                
                  cout<<"homem"<<endl;
                
            }else if(c=="herbivoro"){
                
                cout<<"vaca"<<endl;
                
            }
        }
        
        
    else if(a=="invertebrado"){
        
        if(b=="inseto"){
            
            if(c=="hematofago"){
                
                cout<<"pulga"<<endl;
                
            }else if(c=="onivoro"){
                
                cout<<"lagarta"<<endl;
            }
            
            
            
        }else if(b=="anelideo"){
            
            if(c=="hematofago"){
                
                cout<<"sanguessuga"<<endl;
            }else if(c=="onivoro"){
                
                cout<<"minhoca"<<endl;
            }
        }
        
    }
}
