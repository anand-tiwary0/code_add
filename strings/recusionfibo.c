#include <stdio.h>

int fibo(int);

int main(void){
    int i,n;
    printf("enter number of terms required in fibo \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d ",fibo(i));
    }
    printf("\n");
    return 0;
}

int fibo(int n){
    if(n==1||n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}