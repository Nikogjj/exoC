#include <sys/random.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    int buf[250];
    int somme;
    getentropy(buf,sizeof(buf));
    for(int i = 0; i < 250;i++){
        printf("%d\n",buf[i]);
        somme=somme+buf[i];
    }
    int seed=somme;
        srand(seed);
    // while(1){
    //     rand();
    //     printf("%d\n",rand());
    // }
    //     printf("%ld-------\n",sizeof(rand()));
    //     printf("la somme est %d",seed);


}