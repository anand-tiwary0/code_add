/* 8. Write a program to find the sum of even and odd place digit of a number separately*/

#include <stdio.h>

int main(void)
{
    int n,oddsum,evensum,count,rev;
    oddsum=0;
    evensum=0;
    count =1;
    printf("enter number \n");
    scanf("%d",&n);

    //reversing number
    rev =0;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }

    while(rev != 0)
    {
        if(count%2 != 0)
            oddsum += rev%10;
        else 
            evensum += rev%10;
        
        count++;
        rev = rev/10;
    }

    printf("sum of digits at odd places is = %d \n",oddsum);
    printf("sum of digits at even places is = %d \n",evensum);

    return 0;
}