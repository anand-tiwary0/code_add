#include <stdio.h>

int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    return (a * factorial(a-1));
}

int main(void){
    printf("enter the number to find factorial :: ");
    int n;
    scanf("%d",&n);
    printf("factorial of %d is = %d \n",n,factorial(n));
    return 0;
}