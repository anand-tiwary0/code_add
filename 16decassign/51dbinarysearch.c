/* 5. Write a program in C to implement binary search in an one dimensional array.*/

#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);
void selection_sort(int n,int *input_array);
void binary_search(int *pointer,int n, int num);

int main(void)
{
    int n,i,num,sort,low,high,mid;
    //new variables go here

    n = array_size();
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    selection_sort(n,input_array);

    //input done -> desired operations on array here
    printf("enter the number to search for : ");
    scanf("%d",&num);

     //printing sorted array
    printf("input array after sorting \n");
    for(i=0; i<n; i++)
    {
        printf("%d  ",*(input_array+i));
    }
    printf("\n");
    binary_search(input_array,n,num);


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

void binary_search(int *pointer,int n, int num)
{
    int low,mid,high;
    low = 0;
    high = n-1;
    
    while(low<=high)
    {
        mid = (low + high)/2;
        if(num <*(pointer+mid))
            high = mid - 1;
        else if(num > *(pointer+mid))
            low = mid + 1;
        else 
        {
            printf("%d is found at %d \n",num,mid+1);
            break;
        }
    }
    if(high < low)
    {
        printf("%d is not present in the array \n",num);
    }
}