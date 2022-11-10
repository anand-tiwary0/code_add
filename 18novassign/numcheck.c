/* 1. Write a C program to check whether a number is negative, positive or zero.*/

#include <stdio.h>

int main(void)
{
    float n;
    printf("enter number \n");
    scanf("%f",&n);

    if(n>0)
        printf("%f is positive number \n",n);
    else if(n<0)
        printf("%f is negative number \n",n);
    else
        printf("number entered is 0. \n");

return 0;
}