#include <stdio.h>

void selectionsort(int a[],int size);

int main(void){
    int a[] = {3,44,3322,3,33,2,5,2,65};
    int size = sizeof(a)/sizeof(a[0]);

    selectionsort(a,size);
    
    printf("after sort \n");
    for(int i=0; i<size; i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
    return 0;
}

void selectionsort(int a[],int size){
    int i,temp,index,j;
    for(i=0;i<size-1;i++){//here n-1 as we want to do inside steps only this much as last elements will already be sorted
        int smallest = i;
        for(j=i+1; j<=size;j++){
            if(smallest > a[j]){
                smallest = j;
            }
        }
        //swapping 
        if(smallest != i)
        temp = a[i];
        a[i] = smallest;
        a[j] = temp;
    }
}