#include <stdio.h>
#include <stdlib.h>
#include <sys/random.h>

float aleatoire(float,float);

int main(){
    while(1){
        float r = aleatoire(5,15);
        printf("random : %f\n",r);
    }
    return 0;
}


// float aleatoire(float from, float to){
//     int buf[255];
//     getentropy(buf,sizeof(buf));
    
//     int seed = 0;
//     for (int i = 0; i < sizeof(buf); i++)
//     {
      
//     }
//     srand(seed);
//     int valeur_random = rand();
//     float random_from_to = 0;
//     return random_from_to;
