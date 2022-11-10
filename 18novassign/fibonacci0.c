/* 1. Write a program to print Fibonacci numbers from 1 to n.*/

#include <stdio.h>

int main(void)
{
    int n,sum;
    sum =0;
    printf("enter upto value for fibonacci series \n");
    scanf("%d",&n);

    int a=0,b=1;
    printf(" %d ",a);
    sum = a+b;
    while(sum < n)
    {
        printf("%d ",sum);
        sum = a+b;
        a = b; 
        b = sum;
    }
    return 0;
}