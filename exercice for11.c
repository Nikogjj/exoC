#include <stdio.h>

int main(){ 
    int tab[5]={1,2,3,4,5};
    int rever [5];

    for (int i = 0; i < 5; i++)
    {
        rever[i]= tab[4-i];
        printf("%d",rever[i]);
    }
    
    return 0;
}



// int main(){ 
//     int tab[5]={1,2,3,4,5};
//     int rever [5];

//     int a=5;
//     for (int i = 0; i < 5; i++)
//     {
//         a--;
//         rever[i]= tab[a];
//         printf("%d",rever[i]);
//     }
    
//     return 0;
// }