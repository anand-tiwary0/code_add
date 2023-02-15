#include <stdio.h>
#include <math.h>


void bubblesort(int *, int);

int main(void){
    int a[] = {3,44,3322,3,33,2,5,2,65};
    int size = sizeof(a)/sizeof(a[0]);

    bubblesort(a,size);
    printf("after sort \n");
    for(int i=0; i<size; i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
}


void bubblesort(int a[], int size){
    int i,j,temp;
    for(i=0; i<size-1; i++) //as we have to iterate only n-1 times steps that are inside
    {
        for(j=1; j<= size-i-1; j++){
            if(a[j-1]>a[j]){
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}