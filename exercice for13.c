#include <stdio.h>

int main(){ 
    int tab [10]={5,2,3,4,6,4,7,9,1,8};
    
    for (int i = 0; i < 10; i++){ 

        for (int i = 0; i < 10; i++)
        {
             if (tab[i]> tab[i+1])
            {
                int temp = tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
                printf("%d\n",temp);

            }
        }
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d",tab[i]);
    }
    
    

    return 0;

}

