/* 3. Write a program in C to print all prime numbers from 1 to n, n will be taken as user input.*/

#include <stdio.h>

int main(void)
{
    int n,i,j,count;
    count = 0;
    printf("enter number \n");
    scanf("%d",&n);

    printf("all prime numbers between 1 to %d are : \n",n);

    //iterating over numbers from 2 to n as 1 is not prime
    for(i = 2; i<=n; i++)
    {
        count = 0;
         //this loop for checking if a number is prime or not
        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        //printing numbers which are prime
        if(count == 2)
            printf("%d  ",i);
    }
    printf("\n");

    return 0;

}