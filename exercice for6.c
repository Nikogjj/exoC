#include <stdio.h>
int main(){
    int tab[7];
for(int i =0;i<=7;i++){
    tab[i]=i;
    printf("%d\n", tab[i]);
}

for(int i=0;i<=7;i++){
    int b;
    int somme=tab[i]+b;
    printf("%d+%d=%d\n",tab[i],b,somme);
    b=somme;
}

return 0;
}