#include <stdio.h>

int main(void)
{
    int i;
    for(i=0; i<=127; i++)
    {
        printf("%d \t %c",i,i);
        if(i==11||i==12||i==13||i==14)
            printf("%d = %c",i,i);
    }
    printf("\n");
    return 0;
}