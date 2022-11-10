/*7. Write a program in C to perform the addition of time. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //taking time input
    int h1,h2,m1,m2,s1,s2,h,m,s;
    h=0; m=0; s=0;
    printf("enter time1 \n");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("enter time2 \n");
    scanf("%d %d %d",&h2,&m2,&s2);

    //time addition
    s = s1 + s2;
    if(s>=60)
    {
        m = s/60;
        s = s%60;
    }
    m = m+ m1+m2;
    if(m>=60)
    {
        h = m/60;
        m = m%60;
    }
    h = h+h1+h2;

    //printing final results
    printf("   t1 = %d hh %d mm %d ss \n",h1,m1,s1);
    printf(" + t2 = %d hh %d mm %d ss \n",h2,m2,s2);
    printf("--------------------------- \n");
    printf("total = %d hh %d mm %d ss \n",h,m,s);

    return 0;
}