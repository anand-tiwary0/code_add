//copy stirng form one to other

#include <stdio.h>
#include <string.h>
#define MAX 100

void strcopy(char *destination,char *source);

int main(void){
    printf("enter the string  :: ");
    char a[MAX];
    fgets(a,MAX,stdin);
    char b[MAX];

    strcopy(b,a);
    printf("strlen of b is %d \n",strlen(b));
    printf("%s:: is copied string \n",b);
    printf("%s","print this");

    return 0;
}

void strcopy(char *destination,char * source){
    int i;
    for(i=0; source[i]; i++){
        destination[i] = source[i];
    }
    destination[i] = '\0';
}