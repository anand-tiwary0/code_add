/* 3. Write a program in C to find the sum of two integers using function.*/

#include <stdio.h>

int sum(int,int);

int main(void){
    int a,b,total;
    printf("enter numbers to sum :: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d \n",a,b,sum(a,b));
    return 0;  
}

int sum(int a,int b){
    return a+b;
}