/* 4. Write a program to find all prime numbers from 1 to n.*/

#include <stdio.h>

int main(void)
{
    int n,i,j,factors;
    factors = 0;
    printf("enter upto value (n) \n");
    scanf("%d",&n);

    //outer for loop for iterating over all numbers from 1 to n;
    for(i=2; i<=n; i++)
    {
        factors = 0;
        //inner for loop to check if current number is prime or not
        for(j=1; j<=i/2; j++)
        {
            if(i%j==0)
                factors++;
        }
        //if factor is 1 means only 1 can divide number b/w 1 and n/2 so prime
        if(factors==1)
        {
            printf("%d  ",i);
        }
    }

    printf("\n");
    return 0;
}