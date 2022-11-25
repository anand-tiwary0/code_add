/* 4. Write a program to print all even and odd numbers separately from 1 to n, 
n will be taken as user input.*/

#include <stdio.h>

int main(void)
{
    int n,i;
    printf("enter number \n");
    scanf("%d",&n);

    printf("even numbers between 1 to %d are --- \n",n);
    for(i = 1; i<=n; i++)
    {
        if(i%2 == 0)
            printf("%d  ",i);
    }
    printf("\n");
    
    printf("odd numbers between 1 to %d are --- \n",n);
    for(i=1; i<=n; i++)
    {
        if(i%2 != 0)
            printf("%d  ",i);
    }
    printf("\n");

    return 0;
}