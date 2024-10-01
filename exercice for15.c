#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main(){ 
    int tab[LENGTH]={1,2,3,4,5,6,7,8,9,10}; 
    int tab2[LENGTH]={1,2,3,4,1,5,7,8,9,10};

    for (int i = 0; i <LENGTH; i++)
    {
        if (tab[i]>tab[i+1] && i+1 < LENGTH)
        {
            printf("ce n'est pas dans l'odre croissant ------- %d\n",tab[i]);
        }
        else{
            printf("A----%d\n",tab[i]);
            
        }
        
    }


        
    return 0;

}

