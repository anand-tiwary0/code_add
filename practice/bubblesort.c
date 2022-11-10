/*algorithm for bubblesort*/
/*compair immediate 2 and in this way greatest element shifts
to desired place then do this iteration n - times for n sized array*/

#include <stdio.h>
#include <stdlib.h>

#define length 5

void bubblesort(int *unsort);

int main(void)
{
    int *unsort;
    unsort = malloc (length * sizeof(int));
    printf("enter the numbers to be sorted \n");
    for(int i=0; i<length; i++)
    {
        scanf("%d",(unsort+i));
    }

    bubblesort(unsort);

    return 0;
}

void bubblesort(int *unsort)
{
    int greatest = unsort[0],store = 0;
    //looping length - times over the unsorted array
    for(int i=0; i<length; i++)
    {
        //selection for largest number in for each iteration
        for (int j=i; j<length; j++)
        {
            if(unsort[j]>greatest)
            {
                greatest = unsort[j];
                store = j;
            }
        }

        //exchanging greatest value to current last element
        unsort[store] = unsort[length-i];
        unsort[length-i] = greatest;
        //updating greatest for next iteration
        greatest = unsort[i+1];
    }

    //printing resulting array
    for(int k=0; k<length; k++)
    {
        printf("%d  ",unsort[k]);
    }

    printf("\n");
}