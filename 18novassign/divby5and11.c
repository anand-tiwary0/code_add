/* 2. Write a C program to check whether a number is divisible by 5 and 11 or not.*/

#include <stdio.h>

int main(void)
{
    float n;
    printf("enter number \n");
    scanf("%f",&n);

    if((n%5==0) && (n%11==00))
    {
        printf("%f is divisible by both 5 and 11 \n",n);
    }
    else
        printf("%f is not divisible by 5 and 11 both simultaneously. \n",n);

return 0;
}