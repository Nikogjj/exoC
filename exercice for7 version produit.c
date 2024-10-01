#include <stdio.h>
int main(){
    int tab[7];
for(int i =1;i<=7;i++){
    tab[i-1]=i;
    printf("%d\n", tab[i-1]);
}
printf("produit\n");
int produit=1;
for (int i = 0; i <=6; i++){
    produit=tab[i]*produit;
}
    printf("%d",produit);   
if (produit%2==0){
    printf("le nombre est paire");
}


return 0;
}