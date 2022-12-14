/* 10. Write a program in C to find the sum of elements from 1 to 20 using array.*/

#include <stdio.h>

int main(void)
{
    float a[20],sum;
    int i;    //for array as subscript can only be integer
    sum = 0;
    printf("enter the elements of array \n");
    for(i=0; i<20; i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0; i<20; i++)
    {
        sum = sum + a[i];
    }
    printf("sum of all elements in array = %f \n",sum);

    return 0;
}
