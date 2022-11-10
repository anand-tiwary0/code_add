/* 10. Write a C program to input angles of a triangle and
 check whether triangle is valid or not.*/

#include <stdio.h>

int main(void)
{
    float a1,a2,a3;
    printf("enter angles of triangle \n");
    scanf("%f %f %f",&a1,&a2,&a3);

    if((a1>0 && a2>0 && a3>0) && (a1+a2+a3 == 180))
    {
        printf("angles entered corresponds to a valid triangle \n");
    }
    else
        printf("angles entered is not valid for existance of triangle \n");

    return 0;
}