//maximum occurances 

#include <stdio.h>
#define MAX 100

typedef struct{
    char a;
    int occurances;
}count ;

int max_occur(char *);

int main(void){
    printf("enter array elements :: ")
    char a[MAX];
    fgets(a,MAX,stdin);
    printf("%d is total number of occurances\n ",max_occur(a));
    return 0;
}

int max_occur(char a*){
    
}
