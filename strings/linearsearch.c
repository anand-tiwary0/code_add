#include <stdio.h>

int sequential_sort(int a[],int size,int item){
    for(int  i=0; i<size; i++){
        if(item == a[i]){
            return i;
        }
    }
    return -1;
}

int main(void){
    int a[] = {23,23,3435,23,23,5,5,5,5,745,34,3,42,46,3456,44,327,78,858};
    int size = sizeof(a)/sizeof(a[0]);
    int search = sequential_sort(a,size,44);

    if(search == -1){
        printf("element is not present in the array \n");
    }
    else 
        printf("element is present at %d (0 indexed array) \n",search);

    return 0;
}