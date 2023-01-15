/* 7. Write a program to implement selection sort in C.*/
#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);
void selection_sort(int n,int *p);


int main(void)
{
    int n,i;
    //new variables go here

    n = array_size();
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    //input done -> desired operations on array here
    selection_sort(n,input_array);

    //printing sorted array
    printf("sorted array is : \n");
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

void selection_sort(int n,int *p)
{
    int min;

    for (int i=0;i<n;i++)
    {
        min=i;
        for (int j=i+1;j<n;j++)
        {
            if(*(p+min)>*(p+j))
            {
                int temp=*(p+min);
                *(p+min)=*(p+j);
                *(p+j)=temp;
            }

        }
    }
}