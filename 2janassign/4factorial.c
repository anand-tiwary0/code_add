/* 4. Write a program in C to find the factorial of a number using function.*/

#include <stdio.h>

int _fact(int);

int main(void){
    int n;
    int fact;
    printf("enter number  :: ");
    scanf("%d",&n);
    fact = _fact(n);  
    printf("factorial of %d = %d\n",n,fact);

    return 0;
}

int _fact(int a){
    //base condition
    if(a==0){
        return 1;
    }
    //recursive call 
    return (a*_fact(a-1));
}