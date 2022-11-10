/*5. Write a program in C to find the greatest number among three numbers using nested if else.*/

#include <stdio.h>

int main(void)
{
    float a,b,c;
    printf("enter three numbers \n");
    scanf("%f %f %f",&a,&b,&c);

    //required comparisons
    if(a>=b)
    {
        if(a>c)
            printf("%f is greatest \n",a);
        else if(a==c)  //for the case when all inputs are equal
            printf("all values are equal \n");
        else
            printf("%f is greatest \n",c);
    }
    else 
    {
        if(b>c)
            printf("%f is greatest \n",b);
        else
            printf("%f is greatest \n",c);
    }

return 0;
}