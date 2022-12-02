/* 2. Write a program to convert a binary number to decimal.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, dec, r, i,temp;
    dec = 0;
    i = 0;
    printf("enter binary number \n");
    scanf("%d",&n);

    temp = n; 
    while(temp!=0)
    {
        if(!(temp%10==0 || temp%10==1))
        {
            printf("enter binary number(so allowed digits are 0 and 1 only \n");
            return 1;
        }
        temp = temp/10;
    }

    while(n!=0)
    {
        r = n%10;
        dec = dec + r*pow(2,i);
        i++;
        n = n/10;
    }

    printf("%d \n",dec);

    return 0;
}