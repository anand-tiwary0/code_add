/*recursion algorithm*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%s",&a);
    printf("%i: is the lenth of string ",strlen(a));
    //gets(a);
    char c[20] = "thi";
    char b[10] = "this";
    printf("%s  ",a);
    printf("%d is difference\n space %d ",strcmp(c,b),' ');
    return 0;
}