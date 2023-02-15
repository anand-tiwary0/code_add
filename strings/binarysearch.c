#include <stdio.h>

void binarysearch(int *a,int size,int item){
    int low = 0, high = size-1,mid;
    while(low<=high){
        mid = (low + high)/2;
        if(a[mid]==item){
            printf("item is found at %d in array\n",mid);
            return; //must otherwise infinite loop
        }
        else if(a[mid] < item){
            low = mid + 1;
        }
        else 
            high = mid -1;
    }
    printf("item is not found in the array \n");
}

void bubble_sort(int *a,int size){
    int i,j;
    for(i=0; i<size-1; i++){
        for(j=0; j<size-1-i; j++){
            if(a[j+1]<a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(void){
    int a[] = {23,35,7,8,9,5,4,3,4,6,76};
    int size = sizeof(a)/sizeof(a[0]);
    bubble_sort(a,size);
    binarysearch(a,size,760);
    return 0;
}