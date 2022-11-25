/* 2. Write a program in C to check whether a number is Prime or not.*/

#include <stdio.h>

int main(void)
{
    int n,i,divisor,t;
    printf("enter number \n");
    scanf("%d",&n);
    
    divisor = 0;

    for(i=2,t=n/2; i<=t; i++)
    {
        if(n%i == 0)
        {
            divisor += 1;
            break;       /*break as we got atleast one number in set (1,n) so
                        no need to futhur check it is clear that number is prime*/ 
        }
    }

    //if total divisors from (2 to n/2) is 0 then prime else composite
    if(divisor == 0)
        printf("%d is prime \n",n);
    else    
        printf("%d is not prime(composite number) \n",n);

    return 0;
}