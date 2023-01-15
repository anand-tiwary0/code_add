#include <stdio.h>

int main(void){
    int a[] = {3,0,3324,555,55};
    int min = a[0],max = a[0];
    for(int i=1; i<5; i++){
        if(a[i]<min){
            min = a[i];
        }
        else if(max<a[i]){
            max = a[i];
        }
    }

    printf("min element is %d and max element is %d \n",min,max);

    return 0;
}