/*sum of first n natural number using recurion*/
#include <stdio.h>

int sum(int n);

int main(void)
{
    int n;
    pritnf("enter n for summation \n");
    scanf("%d",&n);
    int total = sum(n);
    printf("sum of first %d natural numbers = %d\n",n,total);
    return 0;
}

int sum(int n)
{
    //base case
    if(n == 0)
    {
        total = 0;
        return total;
    }
    //recusive function call
    int total = 0
    n = sum(n-1);
    total = total + n;

    return total;
}