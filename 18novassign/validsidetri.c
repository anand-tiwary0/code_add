/* 11. Write a C program to input all sides of a triangle and check whether
 triangle is valid or not.*/

#include <stdio.h>

int main(void)
{
    float a,b,c;
    printf("enter sides of the triangle \n");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
        printf("sides are valid and corresponds to triangle \n");  
    else
        printf("entered sides doesn't corresponds to triangle \n");
    return 0;
}