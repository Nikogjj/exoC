#include <stdio.h>

int main(){
int tabl[6]={-18,37,12,13,90,5};

int nombre=tabl [0];
for (int i = 0; i <6; i++){

    if(nombre < tabl[i]){
        nombre=tabl[i];
    }
}
printf("%d est le nombre le plus grand\n",nombre);

nombre =tabl[0];

for (int i = 0; i <6; i++){

    if(nombre > tabl[i]){
        nombre=tabl[i];
    }
}

printf("%d est le nombre le plus petit\n",nombre);


return 0;
}