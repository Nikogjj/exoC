#include <stdio.h>

int main(){
    printf("Question 1:\n");
    int multiplicateur=0;
    for (int nombre = 9; multiplicateur <=10; multiplicateur++)
    {
        int résultat= nombre*multiplicateur;
        printf("%dx%d=%d\n",nombre,multiplicateur,résultat);
    }
    printf("Question 2:\n");

    int note[5]={9,10,15,12,14};
    int somme=0;
    for(int i=0;i<5;i++){
        somme=note[i]+somme;
    }
        printf("%d\n",somme);
    return 0;
}