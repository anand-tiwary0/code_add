/*wap to check whether a number is two digit or not*/

#include <stdio.h>

int main(void)
{
    int i;
    printf("enter number \n");
    scanf("%d",&i);

    if(i>=10 && i<=99)
    {
        printf("number is 2 digit \n");
    }
    else
        printf("number is not of 2 digit \n");

return 0;
}