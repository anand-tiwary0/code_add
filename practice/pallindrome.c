//pallindrome

#include <stdio.h>

int main(void)
{
    int n,rev =0;
    printf("enter number \n");
    scanf("%d",&n);
    int num = n;

    while(n!=0)
    {
        rev = 10 * rev + n%10;
        n = n/10;
    }
    if(rev == num)
    {
        printf("pallind. num \n");
    }
    else
    {    
        printf("not a pallin. num. \n");
    }
return 0;
}