#include <stdio.h>
int main(){
    int tab[7];
for(int i =i;i<=7;i++){
    tab[i]=i;
    printf("%d\n", tab[i]);
}
printf("Somme\n");
    int somme=0;
for(int i=0;i<=7;i++){
    printf("%d",somme);
    somme=tab[i]+somme;
    printf("+%d=%d\n",tab[i],somme);
}
printf("Quotient\n");
    float quotient=0.0;
for(int i=0;i<=7;i++){
    quotient=quotient/tab[i];
    if(tab[i]==0 || quotient==0){
        printf("%d/0 = Division impossible\n",tab[i]);
        quotient=1;
    }
    else{
    printf("%f\n",quotient);
    }
}

return 0;
}