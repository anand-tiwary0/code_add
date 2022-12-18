/* 4. Write a program in C to implement an one dimensional array to implement linear search.*/

#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);

int main(void)
{
    int n,i,num;
    //new variables go here

    n = array_size();
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    //input done -> desired operations on array here
    printf("enter number to search in array \n");
    scanf("%d",&num);
    
    for(i=0; i<n; i++)
    {
        if(num == *(input_array+i))
        {
            printf("%d is found at %d location",);
            break;
        }
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