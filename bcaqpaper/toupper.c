#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    char *s = "hello";
    char *t;
    t = malloc(strlen(s)+1);
    for(int i=0,n=strlen(s)+1; i<n; i++){
        *(t+i) = toupper(*(s+i));
    }
    printf("toupper(%s) == %s \n",s,t);
    free(t);

    return 0;
}