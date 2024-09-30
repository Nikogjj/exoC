#include <stdio.h>
 
int main()
{
    int a =0;
    int modulo;
    while (a<100)
    {
        a++;
            if (a % 2==0)
            {
                printf("%d est un nombre paire\n",a);
            }
        
            if(a % 2 != 0)
            {
                printf("%d est un nombre impaire\n",a);
            }
    }

    return 0;
}