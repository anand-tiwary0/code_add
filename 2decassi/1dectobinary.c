/* 1. Write a program to convert a decimal number to binary.*/

#include <stdio.h>

int main(void)
{
    int n, r, bin,k,rev;
    bin = 1;
    rev = 0;
    printf("enter decimal number \n");
    scanf("%d",&n);
    
    printf("binary for %d is = ",n);
    while(n!=0)
    {
        r = n%2;
        bin = 10*bin  + r;
        n = n/2;
    }

    //rev and then discard last bit
    while(bin!=0)
    {
        k = bin%10;
        rev = 10*rev + k;
        bin = bin/10;
    }

    printf("%d  \n",rev/10);
    return 0;

    //(known bug this program can only work relatively smaller int value)
}