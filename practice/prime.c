/*WAP to find prime or not*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool prime(int a);

int main(void)
{
    //taking input from user   
    int a;
    printf("enter number \n");
    scanf("%d",&a);

    //function call
    bool c = prime(a);
    
    //output as per function return value
    if(c == true)
    {
        printf("number is PRIME \n");
    }
    else
        printf("number is NOT PRIME \n");
    
    return 0;
}



bool prime(int a)
{
    //to reduce repeated checkups taking sqrt to reduce time complexity
    int c = sqrt(a);
    int d;
    for (int i=1; i<=c; i++)
    {
        if(a%i == 0)
        {
            d++;
            printf("d id %d \n", d);
        }
    }
    if(d != 1)
    {
        return false;
    }
    else 
    {
        return true;
    }
}