/*2. Write a program to find the sum of n natural numbers.*/

#include <stdio.h>

int main(void)
{
    int n,sum;
    sum =0;
    printf("enter range for summation of natural number \n");
    scanf("%d",&n);
    
    //finding summation
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("sum for natural numbers upto %d is == %d \n",n,sum);

    return 0;
}