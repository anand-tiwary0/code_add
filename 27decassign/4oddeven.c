/* 4. Write a program in C to find the sum of even and odd place digits
 separately from an array of numbers.  */

#include <stdio.h>
#include <stdlib.h>

int _array(int n, int *pointer_to_array);
int array_size(void);
int * real_array(int n);

int main(void){
    int n,i,even_sum,odd_sum;
    even_sum=odd_sum=0;

    //functions to inpur array
    n = array_size();
    int *input_array;
    input_array = real_array(n);
    _array(n,input_array);

    //input done -> desired operations on array here
    for(i=0; i<n; i++){
        if((i+1)%2==0){
            even_sum = even_sum + *(input_array + i);
        }
        else {
            odd_sum = odd_sum + *(input_array + i);
        }
    }

    //printing summations 
    printf("sum of digits at even places in array = %d \n",even_sum);
    printf("sum of digits at odd places in array = %d ",odd_sum);

    //free allocated memory
    free(input_array);
    printf("\n");
    return 0;
}


int array_size(void){
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);
    return n;
}

int * real_array(int n){
    int *_realarray = malloc(n * sizeof(int));
    if(_realarray == NULL){
        printf("no memory space available try again!\n");
        return NULL;
    }
    return _realarray;
}

int _array(int n, int *pointer){
    printf("enter array elements \n");
    int i;
    for(i=0; i<n; i++){
        scanf("%d",(pointer+i));
    }
    return 0;
}