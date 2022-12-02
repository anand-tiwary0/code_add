/* 5. Write a program to find the sum of all prime numbers from 1 to n.*/

#include <stdio.h>

int main(void)
{
    int n,i,j,sum,factors;
    sum = 0; factors = 0;
    printf("enter upto value \n");
    scanf("%d",&n);

    for(i =2; i<=n; i++)
    {
        factors = 0;
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0)
                factors++;
        }
        
        if(factors == 1)
        {
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("\nsum of primes from 1 to %d is = %d \n",n,sum);

    return 0;
}