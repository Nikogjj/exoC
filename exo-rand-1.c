#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

        float r= 5+(float)rand()/RAND_MAX*10;
        printf("%f\n",r);
        printf("%d\n",rand());

    return 0;
}