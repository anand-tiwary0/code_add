/* 2. Write a C program to check whether a number is divisible by 5 and 11 or not.*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);

    if((n%5==0)&&(n%11==0))   //% operator can take only integer operand
        printf("%d is divisible by 5 and 11 both \n",n);
    else
        printf("%d is not divisible by both 5 and 11 \n",n);

    return 0;
}