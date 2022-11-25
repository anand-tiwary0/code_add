/* 7. Write a program to find the sum of even and odd digits of a number separately.*/

#include <stdio.h>

int main(void)
{
    int n,odd_sum,even_sum,r;
    odd_sum = 0;
    even_sum = 0;
    printf("enter number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n%10;
        if(r%2 == 0)
            even_sum = even_sum+r;
        else
            odd_sum = odd_sum + r;
            
        n = n/10;
    }
    printf("sum of digits(even by value) = %d \n",even_sum);
    printf("sum of digits(odd by value) = %d \n",odd_sum);
return 0;
}