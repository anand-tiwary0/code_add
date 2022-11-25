/*static variables are those which maintain their value 
over multiple function calls*/

extern int i;
#include <stdio.h>

#define tiwary 89

void staticvar(void);
int GLOBAL; GLOBAL = 89;
int main(void)
{
    //int a;
    //printf("enter number \n");
    //scanf("%d",&a);
    printf("sum = %d \n", tiwary+11);
    for(int i =0; i<4; i++)
    {
        staticvar();
    }
}

void staticvar()
{
    static int a;
    int b;
    a=5;
    b=7;
    a += 1;
    b += 1;
    printf("static maintains vlaue out of previous call = %d \n",a);
    printf("normal can't hold vlaue out of previous func call = %d \n",b);
}