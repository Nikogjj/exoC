#include <stdio.h>

int main(){
    float a=-10;
    float b=-10;
    while(b<=50){
        b++;
        float quotient=a/b;
        if (b==0)
        {printf("calcul impossible\n");}
        else{
        printf("%f/%f=%f\n",a,b,quotient);
        a=quotient;
        }
        }
        
    return 0;
}