#include <stdio.h>

int main(){
    int a=5;
    int b=4;
    int c,d,e,f;
    b= a++ + ++a;
    printf("a=%d and b=%d\n",a,b);
    printf("\n");
    d= b++ + ++a;
    printf("a=%d and b=%d d= %d\n",a,b,d);
    printf("\n");
    e= b++ + ++b;
    printf("a=%d and b=%d e= %d\n",a,b,e);
    printf("\n");
    f= a++ + ++b;
    printf("a=%d and b=%d f= %d\n",a,b,f);
    printf("\n");
    printf("%d %d %d %d %d %d",a,b,c,d,e,f);
    return 0;
}