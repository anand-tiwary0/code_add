#include <stdio.h>

void main(){
    int a=4,b=3,c=7;
    c=((a>b)&&(b>c))?b+c:c-b;
    printf("%d %d %d",a,b,c);
}