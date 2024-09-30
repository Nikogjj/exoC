#include <stdio.h>

int main(){
    int a=1;
    while (a<=100)
    {
        a++;
        if (a % 3==0)
        {
            printf("%d Fizz\n",a);
        }
        if (a % 5==0)
        {
            printf("%d buzz\n",a);
        }
        else{
            printf("%d\n",a);
        } 
        
    }
    
    return 0;
}
