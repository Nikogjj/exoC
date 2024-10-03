#include <stdio.h>
#include <stdlib.h>
#include <sys/random.h>
#define BUFF_SIZE 255
float aleatoire(float,float);



int main(){
    while(1){
        float r = aleatoire(5,15);
        printf("random : %f\n",r);
    }
    return 0;
}

float aleatoire(float from, float to){
    int buf[BUFF_SIZE];
    getentropy(buf,sizeof(buf));
    
    int seed = 0;
    for (int i = 0; i < BUFF_SIZE; i++)
    {
        seed=buf[i]+seed;
    }
    srand(seed);

    int valeur_random = rand();
    float random_from_to = from+(float)valeur_random/RAND_MAX*(to-from);
    return random_from_to;
}