#include <stdio.h>

int main(){
    int tab [5]={5,3,5,10,5};


    for (int i = 0; i < 5; i++)
    {
        if(tab[i]%2==0)
        printf("%d est un nombre paire",tab[i]);
    }
    return 0;
    
}