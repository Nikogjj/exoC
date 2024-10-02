#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    int temp=tab[9];
    for (int i = 9; i >=0; i--)
    {
        if (i==0)
        {
            tab[0]=temp;
        }
        else{
        tab[i]=tab[i-1];

        }
    }


        for (int i = 0; i < 10; i++)
    {
        printf("%d\n",tab[i]);
    }
    
        
    return 0;

}

