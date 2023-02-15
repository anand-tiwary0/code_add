#include <stdio.h>

int _min(int *a,int size,int start){
    int min = a[start];
    int loc = start;
    
    for(int i=start+1; i<=size-1; i++){
        if(min>a[i]){
            min = a[i];
            loc = i;
        }
    }
    return loc;
}

int main(void){
    int a[] = {11,99,12,323,5,2,45,1,3,5};
    int size = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0; i<size-1; i++)  //loop should be run only n-1 times
    {
        int loc = _min(a,size,i);
        int temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    //printing sorted array;
    for(i=0; i<=size-1; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}