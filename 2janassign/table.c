/* Write a program in C to print the multiplication table for an input
(input may be any number from 1 to 10).*/

#include <stdio.h>

int main(void){
    int n,i;
    printf("enter the number \n");
    scanf("%d",&n);
    printf(":: multiplication table for %d :: \n",n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }

    return 0;
}