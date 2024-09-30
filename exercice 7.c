#include <stdio.h>

int main(){
    int a=13;
    int multiplicateur=0;
    while (multiplicateur<=10)
    {
        int resultat=a*multiplicateur;
        printf("%dx%d=%d\n",a,multiplicateur,resultat);
        multiplicateur++;
    }
    
}