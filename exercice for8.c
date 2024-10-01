#include <stdio.h>
#include <string.h>
int main(){
    int notes [5] = {10,12,15,9,11};
    int coefs [5] = {1,2,1,3,8};
    int moyenne[5] = {notes[0]*coefs[0],notes[1]*coefs[1],notes[2]*coefs[2],notes[3]*coefs[3],notes[4]*coefs[4]};

    printf("notes x coeff 1(0):%d\n",moyenne[0]);
    printf("notes x coeff 2(1):%d\n",moyenne[1]);
    printf("notes x coeff 3(2):%d\n",moyenne[2]);
    printf("notes x coeff 4(3):%d\n",moyenne[3]);
    printf("notes x coeff 5(4):%d\n",moyenne[4]);

    float sommecoefs=0;
    for(int i=0;i<5;i++){
        sommecoefs=sommecoefs+coefs[i];
    }
        printf("%f est la sommes des coeffs \n",sommecoefs);
    float sommenotes=0;
    for (int i = 0; i < 5; i++){
        sommenotes=sommenotes+moyenne[i];
    }
    printf("%f est la somme des notes multipliées par leurs coeffs\n",sommenotes);

    float moyennegenerale=sommenotes/sommecoefs;
    printf("La moyenne générale de l'éléve est de : %f\n",moyennegenerale);
    



return 0;
}

// int size = 1;
// scanf("%d",&size);
// printf("%d\n",size);
// int notes[size];
// for (int i = 0; i < size; i++)
// {
//     notes[i] = 0;
// }
// memset(notes,0,size);

// for (int i = 0; i < 5; i++)
// {
//     int input = 0;
//     scanf("%d",&input);

//     /* code */
// }

// int my_memset(int* tableau,int valeur,int size){
//    for (int i = 0; i < size; i++)
//     {
//         tableau[i] = valeur;
//     } 

//     return 0;
// }