/* Print N to 1 using recursion */

#include <stdio.h>

int num(int n);

int main(void)
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);

    num(n);
    printf("\n");
    return 0;
}

int num(int n)
{
    //break condition
    if(n==0)
    {
        return 0;
    }

    for(int i =1; i<=n; i++)
    {
        num(0+i);
    }
    

    //doing actual thing
    printf("%d  ",n);

    return 0;
}