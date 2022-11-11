/* 2. Write a program to print all Fibonacci numbers upto nth term.*/

#include <stdio.h>

int main(void)
{
    int n,sum;
    printf("enter n for number of terms required in series \n");
    scanf("%d",&n);

    int a,b,i;
    a=0,b=1;
    printf("%d ",a);
    sum = a+b;
    for(i=2; i<=n; i++)
    {
        printf("%d ",sum);
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("\n");
return 0;
}