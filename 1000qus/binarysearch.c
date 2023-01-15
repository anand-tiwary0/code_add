#include <stdio.h>
#include <stdlib.h>

void _search(int *,int,int);

int main(void){
    int a[] = {6,3,5,56,43,22};
    int size = sizeof(a)/sizeof(a[0]);
    int search = 6; 
    _search(a,search,size);
}

void _search(int a[],int search,int size){
    for(int i=0; i<size; i++){
        if(a[i]==search){
            printf("%d is found at index num = %d\n",search,i);
            exit(0);
        }
    }
}