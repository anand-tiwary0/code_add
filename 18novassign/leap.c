/* 3. Write a C program to check whether a year is leap year or not.*/
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter year \n");
    scanf("%d",&n);

    if(((n%4==0)&&(n%100 != 0)) || (n%400 ==0))
        printf("%d is leap year \n",n);
    else
        printf("%d is not leap \n",n);

    return 0;
}