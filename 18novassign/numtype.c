/* 1. Write a C program to check whether a number is negative, positive or zero.*/

#include <stdio.h>

int main(void)
{
    float n;
    printf("enter number \n");
    scanf("%f",&n);

    if(n>0)
        printf("input is positive \n");
    else if(n<0)
        printf("input is negative \n");
    else
        printf("input is zero \n");

return 0;
}