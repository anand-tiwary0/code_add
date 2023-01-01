#include <stdio.h>

int search(int a[],int n,int key){
    int i;
    for(i=0; i<n; i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(void){
    int capacity,index,key;
    int a[] = {[0]=1, [5]=9, [6]=10, [8]=9,10,11,38,[89] = 3838,33};
    capacity = sizeof(a)/sizeof(a[0]);
    key = 3838;

    index = search(a,capacity,key);
    //printf("%d is index %d is size %d is capacity\n",index,sizeof(a),capacity);

    
    
    if(index == -1){
        printf("element is not found in array \n");
    }
    else{
        printf("element %d is found at location %d\n",key,index+1);
    }
    return 0;
}