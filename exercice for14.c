#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5
// le define sert à créer une variable qui varie partout
int main(){ 
    int tab1 [TAILLE]={1,3,5,7,9};
    int tab2 [TAILLE]={2,4,6,8,10};
    int fusion[TAILLE*2];

    for (int i = 0; i < TAILLE*2; i++)
    {

        if (i>=TAILLE)
        {
            fusion[i]=tab2[i-TAILLE];
        }
        else{
        fusion[i]=tab1[i];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",fusion[i]);
    }
    
    
    return 0;

}

