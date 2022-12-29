/* 1. Write a program in C to check whether a number is Krishnamurthy number. 
For example, 145 is a Krishnamurthy number because the sum of factorial of all digits
 of the number is equal to 145.*/

#include <stdio.h>

int fact(int n);

int main(void){
    int n,number,i,sum;
    sum = 0;
    printf("enter the number to check\n");
    scanf("%d",&n);
    number = n;
    //outer for loop to iterate over all numbers
    while(number!=0){
        printf("%d fact = %d\n",number%10,fact(number%10));
        sum = sum + fact(number%10);
        number = number/10;
    }
    printf("-------------------\n");
    printf("sum(fact) = %d\n",sum);
    if(n == sum){
        printf("%d is Krishnamurty's number\n",n);
    }
    else{
        printf("%d in not Krishnamurthy's number\n",n);
    }

    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;      //base case of recursion
    }
    //recursive calls
    return n*(fact(n-1));
}