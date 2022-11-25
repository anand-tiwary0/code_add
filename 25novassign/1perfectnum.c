/* 1. Write a program in C to check whether a number is Perfect or not.*/

#include <stdio.h>

int main(void)
{
    int n,i,sum;
    sum = 0;
    printf("enter number\n");
    scanf("%d",&n);

    for(i=1; i<=n/2; i++)
    {
        if(n%i == 0)
            sum = sum + i;
    }
    if(sum == n)
        printf("%d - perfect number\n",n);
    else
        printf("%d - not a perfect number \n",n);
    
return 0;
}