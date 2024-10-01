#include <stdio.h>

int main(){ 
    int tab[10]={1,2,3,4,5,5,5,5,1,2};
    
    int nombre=5;
    int apparition=0;
    for (int i = 0; i < 10; i++)
    {
        if (nombre==tab[i]){
            apparition++;
        }
    }
    
    printf("%d",apparition);


    return 0;
}

