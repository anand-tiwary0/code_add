/* 5. Write a C Program to find the factorial of a number using recursion. */

#include <stdio.h>

//as factorial is always +ve and usually large int so typedef a large data type 
typedef unsigned long long int llu;   //max 8 bytes 

llu factorial(int);

int main(void)
{
    int n;
    //factorial for non-negative integers are not defined so ensuring that input
    do
    {
        printf("enter non-negative integer only \nenter number :: ");
        scanf("%d",&n);
    }
    while(n<0);

    printf("factorial of %d = %llu  \n",n,factorial(n));

    return 0;
}

llu factorial(int num)
{
    //base case for recursion
    if(num==0 || num==1){
        return 1;
    }
    //recursive function calls with decreasing argument for each call
    return (num * factorial(num-1));
}

