/* 3. Write a program to check whether a number is Armstrong number or not.
examples are 153,370,371,407*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,temp,temp1,r,sum,digit;
    sum = 0;
    digit = 0;
    printf("enter number \n");
    scanf("%d",&n);

    //calculation of number of digits in given input
    while(temp != 0)
    {
        digit++;
        temp = temp/10;
    }

    temp1 = n;
    while(temp1 != 0)
    {
        r = temp1 % 10;
        sum = sum + pow(r,digit);
        temp1 = temp1/10;
    }

    if(sum == n)
    {
        printf("%d is an armstrong number \n",n);
    }
    else
        printf("%d is not armstrong number \n",n);

    return 0;
}