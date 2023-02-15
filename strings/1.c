#include <stdio.h>

int main(void){
    char a[40];
    printf("enter string ::  ");
    fgets(a,40,stdin);

    printf("entered string is :: \n %s \n",a);
    

    return 0;
}