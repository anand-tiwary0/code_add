/* 6. Write a program to check whether a number is perfect number or not. */


#include <stdio.h>

int main(void)
{
    int n, i, s,t;
    s=0;
    printf("enter number \n");
    scanf("%d",&n);

    for(i=1,t=n/2; i<=t; i++)
    {
        if(n % i==0)
            s = s + i;
    }

    if(s==n)
        printf("%d is perfect number \n",n);
    else
        printf("%d is not perfect number \n",n);

    return 0;
}