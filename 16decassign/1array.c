/* 1. Write program in C to implement an array to display elements from 1 to 20.*/

#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);

int main(void)
{
    int n,i;
    n = array_size();
    printf("%d is input size \n",n);
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    //printing array elements
    printf("array elements are : \n");
    for(i=0; i<n; i++)
    {
        printf("%d  ",*(input_array+i));
    }
    free(input_array);
    printf("\n");
    return 0;
}


int array_size(void)
{
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    return n;
}

int * real_array(int n)
{
    int *_realarray = malloc(n * sizeof(int));
    if(_realarray == NULL)
    {
        printf("no memory space available try again!\n");
        return NULL;
    }
    return _realarray;
}

int _array(int n, int *pointer)
{
    printf("enter array elements \n");
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",(pointer+i));
    }
    return 0;
}