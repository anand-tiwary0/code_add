/*1. Write a program to find the reverse of a number. */

#include <stdio.h>

int main(void)
{
    int n,reverse;
    reverse =0;

    printf("enter nuumber to reverse \n");
    scanf("%d",&n);

    while(n!=0)
    {
        reverse = 10*reverse + n%10;
        n = n/10;
    }

    printf("reverse of  number= %d \n",reverse);

    return 0;
}
