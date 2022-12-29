#include <stdio.h>
#include <string.h>

void main(){
    
    printf("%p\n","this is the string");
    static char name[] = "jan";
    //printf("%c \n ",name[]);
    int s = strlen(name);
    printf("%d is lenth of string \n",s);
}