#include <stdio.h>

int main(void)
{   
    printf("ASCII val \t character \n");
    for(int i = 0; i<=127; i++)
    {
        printf("%d \t %c \n",i,i);
    }

    return 0;
}