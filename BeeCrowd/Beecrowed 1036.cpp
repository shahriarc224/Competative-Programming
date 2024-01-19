/* problem Beecrowed 1036:  https://www.beecrowd.com.br/judge/en/runs/code/37293629 

code submit korar por 5% error dekhay but nichr code ta copy kore past korlm tar por acdcept korlo

code source:   https://github.com/md-abdullah-al-maruf/beecrowd/blob/main/1036%20-%20Bhaskara%27s%20Formula

code:

#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    double R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(((B*B)-(4*A*C))<0 || A==0){
    
    printf("Impossivel calcular\n");
    }
    else{
    R1=((-B+(sqrt(B*B-4*A*C)))/(2*A));
    R2=((-B-(sqrt(B*B-4*A*C)))/(2*A));
    printf("R1 = %0.5lf\n",R1);
    printf("R2 = %0.5lf\n",R2);
    }
    return 0;
}


*/

//My code :

//https://www.beecrowd.com.br/judge/en/problems/view/1036


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float a,b,c;
    cin>>a>>b>>c;
    
        float e=(-b+(sqrt(b*b-4*a*c)))/(2*a);
        float f=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    
    if( a==0 || ((b*b)-(4*a*c))<0){
    
    cout<<"Impossivel calcular"<<endl;
    
}
    
    
else{
    
    cout<<fixed<<setprecision(5)<<"R1 = "<<e<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<f<<endl;

}    

    
}
