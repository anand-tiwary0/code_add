/* 6. Write a program to implement bubble sort in C.*/

#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);

int main(void)
{
    int n,i,count,temp;
    //new variables go here

    n = array_size();
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    //input done -> desired operations on array here
    for(int i=0; i<=n-1; i++)
    {
        count = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(*(input_array+j)>*(input_array+j+1))
            {
                temp = *(input_array+j);
                *(input_array+j) = *(input_array+j+1);
                *(input_array+j+1) = temp;
                count ++;
            }   
        }
        if(count == 0)
            {
                break;
            }
    }
    //printing sorted array
    for(i=0; i<=n-1; i++)
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