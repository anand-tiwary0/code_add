/* 9. Write a program to print Fibonacci series upto nth Term.*/

#include <stdio.h>

int main(void)
{
    int n,sum,a,b,i;
    a=0, b=1;
    printf("enter number(total terms required) \n");
    scanf("%d",&n);

    //fibonacci printing
    printf("%d  %d  ",a,b);

    for(i=2; i<n; i++)
    {
        sum = a+b;
        printf("%d  ",sum);
        a = b;
        b = sum;
    }
    printf("\n");
    



    return 0;
}