#include <stdio.h>

int binarysearch(int *,int,int);

void main(void){
    int a[] = {33,333,5543,2342,242,2342,244};
    int size = sizeof(a)/sizeof(a[0]);
    int search = 333;
    int found = binarysearch(a,size,search);
    found?printf("number is at location %d \n",found):printf("number is not found\n");
}

int binarysearch(int a[],int size, int search){
    int low,high,mid;
    low = 0;
    high = size - 1;
    while(low<high){
        mid = (low+high)/2;
        if(mid==search){
            return mid+1;
            break;
        }
        else if(mid < search){
            low = mid + 1;
        }
        else 
            high = mid -1;
    }
    return 0;
}
