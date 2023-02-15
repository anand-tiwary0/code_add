#include <stdio.h>

int main(void){
    char operator;
    int a,b;
    printf("enter the oprand ");
    scanf("%c",&operator);
    printf("enter the operator(only * /) ");
    scanf("%d %d",&a,&b);

    switch(operator)
    {
        case '+' : {
            printf("%d + %d = %d \n",a,b,a+b);
            break;
        }
        case '-' : {
            printf("%d - %d = %d \n",a,b,a-b);
            break;
        }

        default :
        {
            printf("wrong choice of operator \n");
        }
    }
    return 0;
}