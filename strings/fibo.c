#include <stdio.h>

int fibo(int);

int main(void){
    int i;
    printf("enter the numbers of term need for fibonacci series \n");
    scanf("%d",&i);
    int j;
    for(j=0; j<i; j++){
        printf("%d ",fibo(j));
    }
    return 0;
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}