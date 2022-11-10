/*algorithm for selection sort*/

#include <stdio.h>

#define length 5

int main(void)
{
    int a[length];
    printf("enter unsorted array elements \n");
    for(int i=0; i<length; i++)
    {
        scanf("%d",(a+i));
    }

    //sorting algo

    
    int store =0;
    
    //1. for loop for n-times iteration
    for(int i=0; i<length; i++)
    {
        //setting up a pseudo greatest element initialization
        int greatest = a[i];
        store = i;
        //2. for loop for one iteration and selection of greatest element out of all for current iteration
        //each iteratin should begin from only unsorted part of unsorted array
        for (int j=i; j<length; j++)
        {
            //selection of greatest element for current array status
            if(greatest <= a[j])
            {
                greatest = a[j];
                store = j;
            }
        }
        a[store]=a[i];          //still can't work with negative values
        a[i] = greatest;
    }

    //printing finally sorted array
    for (int i =0; i<length; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");

    return 0;
}