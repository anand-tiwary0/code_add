#include <stdio.h>
#include <stdlib.h>

int lcm(int , int);

int main(void)
{
    int a,b,lc;
    printf("enter numbers \n");
    scanf("%d %d",&a,&b);

    lc = lcm(a,b);
    printf("lcm = %d \n",lc);
    return 0;
}


int lcm(int a , int b)
{
    int c=0,lcmm;
    if(b<a)
    {
        int temp = a;
        b = a;
        a = temp;
        printf( "now a= %d and b = %d \n",a,b);
    }
   if(a < b)
    {
        for(int i = 1; i<b; i++)
        {
            if((b%i==0) && (a%i==0))
            {
                c++;
                if(c==2)
                {
                    lcmm = i;
                    return lcmm;
                }
                printf("value of c = %d \n",c);
            }
        }
    }
    
    return c;
}