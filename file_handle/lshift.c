/*uses of few operators
bitwise operators are mostly used with interger oprands*/

#include <stdio.h>

int static1(int a);
int normal(int b);

int main(void)
{
    int a;
    a = 10;
    printf("left shift operaion = %d \n", a<<2);
    printf("right shift operator = %d \n", a>>2);
    printf("enter a static variable \n");
    int q;
    scanf("%d",&q);
    for(int i = 0; i<3; i++)
    {
        printf("value for static = %d \n", static1(q));
        printf("value for normal variable = %d \n", normal(q));
    }



    return 0;
}

int static1(int a)
{
    static int tt;
    tt +=1;
    return tt;
}

int normal(int a)
{
    int tt;
    tt += 1;
    return tt;
}
