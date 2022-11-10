/*algorithm for selection sort*/

#include <stdio.h>
#include <stdlib.h>
#define length 5

void selectionsort(int *unsort);

int main(void)
{
    int *unsort;
    unsort = malloc(length * sizeof(int));
    printf("enter numbers to be sorted \n");
    for(int i=0; i<length; i++)
    {
        scanf("%i",(unsort+i));
    }

    selectionsort(unsort);

    free(unsort);

}


void selectionsort(int *unsort)
{
    int greatest=unsort[0],store;
    for (int i=0; i<length; i++)
    {
        greatest = unsort[i];
        store = i;
        for (int j=i; j<length; j++)
        {
            if(unsort[j]>=greatest)
            {
                greatest = unsort[j];
                store = j;
            }
        }
        unsort[store] = unsort[i];
        unsort[i] = greatest;
    }

    for (int k = 0;k<length;k++)
    {
        printf("%d  ",unsort[k]);
    }
    printf("\n");
}