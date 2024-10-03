#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUF_SIZE 255

int main(){

    int tab [BUF_SIZE];
    getentropy(tab,BUF_SIZE);
    int somme=0;
    for (int i = 0; i < BUF_SIZE; i++)
    {
        somme=tab[i]+somme;
    }
    
    srand(somme);

    while (1)
    {
        rand();
        float r = (float)rand()/RAND_MAX*10;
        printf("%f ",r);
        if ((int)r%2==0)
        {
            printf("ce nombre est paire\n");
        }
        if ((int)r%2!=0)
        {
            printf("ce nombre est impaire\n");
        }
        
        
    }
    
    
}