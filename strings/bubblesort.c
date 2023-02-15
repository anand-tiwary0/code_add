#include <stdio.h>

void bubble_sort(int *,int);

int main(void){
    int a[] = {3,32,12,545,2,1,25,3,33,324,234,100000,10000,2343};
    int size = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,size);
    printf("sorted array is :: \n");
    
    for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int a[],int n){
    int i,j;
    for(i=0; i<n-1; i++){  //only iterate over n numbers of times as 
                            //each iteration sorts one number and hence n-1 iterations leads to sorting of all numbers
        for(j=0; j<n-1-i; j++) //for each iteration we will make one less comperision as last element will already be sorted
        {
            if(a[j+1]<a[j]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    return;
}