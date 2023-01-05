/* 2. Write a C Program to check whether a number is Perfect or not using function. */

#include <stdio.h>
#include <stdbool.h>

void perfect_check(int);

int main(void){
    int n;
    printf("enter number :: ");
    scanf("%d",&n);
    perfect_check(n);
    return 0;
}

void perfect_check(int n){
    int i,sum;
    sum = 0;
    //checking for factors between 1 to n/2 and adding them(if any)
    for(i=1; i<=n/2; i++)
    {
        if(n%i == 0)
            sum = sum + i;
    }
    if(sum == n)
        printf("%d -> perfect number\n",n);
    else
        printf("%d -> not a perfect number \n",n);  
}