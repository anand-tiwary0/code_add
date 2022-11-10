/*algorithm for mergesort*/
#include <stdio.h>
#include <stdlib.h>

#define length 5

void mergesort(int *unsort);

int main(void)
{
    int *unsort;
    unsort = malloc (length * sizeof(int));
    printf("enter elements for unsorted array \n");

    for(int i=0; i<length; i++)
    {
        scanf("%d",(unsort+i));
    }
    
    mergesort(unsort);

    return 0;
}


//function for mergesort

void mergesort(int *unsort)
{
    
}