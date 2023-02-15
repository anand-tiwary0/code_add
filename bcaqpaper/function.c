#include <stdio.h>

int sum(int,int);

int main(){
    int a,b;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("sum = %d",sum(a,b));
}

int sum(int a,int b){
    return a+b;
}