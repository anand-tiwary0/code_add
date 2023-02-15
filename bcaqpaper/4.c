#include <stdio.h>

int main(void){
    int a=5;
    int b=4;
    int c,d,e,f;
    b = a++ + ++a;
    d= b++ + ++a;
    e =b++ + ++b;
    f=a++ + ++b;
    printf("a= %d b = %d c=%d  d =  %d    e= %d  f =  %d",a,b,c,d,e,f);
    return 0;
}