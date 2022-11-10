/* 2. Write a program in C to find the greater number between two numbers. */

#include <stdio.h>

int main(void)
{
    int a,b;
    printf("enter numbers to be compared \n");
    scanf("%d %d",&a,&b);
    
    if(a>b)
        printf("%d is greater than %d\n",a,b);
    else if(a<b)
        printf("%d is greater than %d \n",b,a);
    else
        printf("both numbers are equal \n");

    return 0;
}