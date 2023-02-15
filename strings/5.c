#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int words(char a[]);

int main(void){
    printf("enter string \n");
    char a[MAX];
    fgets(a,MAX,stdin);
    printf("total number of word in your string = %d \n",words(a));
    return 0;
}

int words(char a[]){
    int i=0,count = 0;
    while(a[i] != '\0'){
        if(a[i]==' '){
            count++;
            printf("count is %d \n",count);
            i++;
            continue;
        }
        i++;
    }
    return count+1;
}