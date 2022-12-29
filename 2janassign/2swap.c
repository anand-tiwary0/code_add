/* 2. Write a program in C to swap two values using function.*/

#include <stdio.h>

void swap(int * , int *);

int main(void){
    int a,b;
    printf("enter numbers \n");
    scanf("%d %d",&a,&b);
    printf("before swap a = %d and b = %d \n",a,b);
    swap(&a,&b);
    printf("after swap a= %d and b = %d \n",a,b);
    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}