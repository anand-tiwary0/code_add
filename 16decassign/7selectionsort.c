/* 7. Write a program to implement selection sort in C.*/

#include <stdio.h>

int *sortarray selectionsort(int *inputarray);

int main(void)
{
    int *inputarray,i;
    printf("enter the size of array \n");
    scanf("%d",&n);
    inputarray = malloc(n);
    if(inputarray = NULL)
    {
        printf("no memory space available try again \n");
        return 1;
    }

    printf("enter array elements \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",*(inputarray+i));
    }

    
}