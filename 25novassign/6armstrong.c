/* 6. Write a program to check whether a number is Armstrong or not. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,digit,temp,temp1,sum,r;
    digit =0;
    r =0;
    sum = 0;
    printf("enter number \n");
    scanf("%d",&n);

    temp = n;
    temp1 = n;

    /*counting number of digit for pow() function
    so that we can check armstrong for any number of digits*/
    while(temp1!=0)
    {
        digit++;
        temp1 /= 10;
    }

    //armstrong logic
    while(temp != 0)
    {
        r = temp%10;
        sum = sum + pow(r,digit);
        temp = temp/10;
    }

    if(sum == n)   //as n is unchanged and temp was changed
        printf("number is armstrong \n");
    else 
        printf("number is not armstrong \n");

    return 0;
}