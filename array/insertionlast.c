#include <stdio.h>

int insertionlast(int a[],int num_array, int capacity, int key){
    if(num_array < capacity){
        a[num_array+1] = key;
        printf("element = %d \n",a[num_array+1]);
        return 1;
    }
    else{
        return -1;
    }
}

int main(void){
    int capacity,key, result;
    int a[] = {22 ,33 ,44 , [100] = 222};
    capacity = sizeof(a)/sizeof(a[0]);
    key = 23333;
    result = insertionlast(a,100,capacity,key);

    printf("array before insertion \n");
    for(int i=0; i<capacity; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    if(result == -1 ){
        printf("insertion is not possible \n");
    }
    else{
        printf("insertion is successful\n");
    }

    printf("array after inserion \n");
    for(int i=0; i<capacity+100000; i++){
        printf("%d ",a[i]);
 
    }
    printf("\n");

    return 0;
}