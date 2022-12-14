/* 9. Write a program in C to display elements from 1 to 100 using array.*/

#include <stdio.h>

int main(void)
{
    int array[100],i;
    //first for loop for taking user input in array
    printf("enter array elements \n");
    for(i=0; i<100; i++)
    {
        scanf("%d",&array[i]);
    }
    //printing array elements
    printf("enterted element are \n");
    for(i=0; i<100; i++)
    {
        printf("%d   ",array[i]);
    }
    printf("\n");

    return 0;
}