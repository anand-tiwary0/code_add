/* print sum of first n natural number from 1 to n using recursion */

#include <stdio.h>

int sum(int n);

int main(void)
{
    int n;
    printf("enter upto value for natural number \n");
    scanf("%d",&n);
    int total = sum(n);

    printf("total sum = %d \n",total);
    return 0;
}

int sum(int n)
{
    int total = 0;
    //end condition
    if(n == 0)
    {
        total = 0;
        return total;
    }
    //recurive call 
    sum(n-1);
    //doing actual sum
    total = total + n;
    return total;
}