/* 12. Write a C program to check whether the triangle is equilateral, isosceles
    or scalene triangle.*/

#include <stdio.h>

int main(void)
{
    float a,b,c;
    printf("enter the sides of the triangle \n");
    scanf("%f %f %f",&a,&b,&c);
    
    //check if sides are valid for a triangle - sum of any two must be greater then third
    if((a+b>c) && (b+c>a) && (c+a>b))
    {
        if((a==b) && (b==c))
            printf("triangle is equilateral \n");
        else if((a==b) || (b==c) || (c==a))
            printf("triangle is isosceles \n");
        else
            printf("triangle is scelene \n");
    }
    else
        printf("wrong input for sides of triangle\n");
    
    return 0;
}