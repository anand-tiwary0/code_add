#include <stdio.h>

void natural(int);

void main(){
    int i;
    printf("enter \n");
    scanf("%d",&i);
    natural(i);
}

void natural(int i){
    int n;
    for(n=1; n<=i; n++ ){
        printf("%d  ",n);
    }
}