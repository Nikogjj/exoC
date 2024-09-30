#include <stdio.h>

int main(){

    int a= 1;
    int b=0;
    while (b<67)
    {
        b++;
        int somme=a+b;
        printf("%d+%d=%d\n",a,b,somme);
        // j'ai mis le "a" après le printf (SANS METTRE "INT a" CAR SINON IL DECLARE UNE NOUVELLE VALEUR DANS LE "WHILE")
        a =somme;
    }
    
}