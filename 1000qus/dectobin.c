#include <stdio.h>

unsigned long dectobin(int);
int main(){
    int n;
    unsigned long bin=0;
    printf("enter decimal number \n");
    scanf("%d",&n);
    bin = dectobin(n);
    printf("%d = %lu \n",n,bin);
    return 0;
}

unsigned long dectobin(int n){
    int bin=0,i=1;
    while(n!=0){
        bin=bin+i*(n%2);
        n = n/2;
        i = i*10;
    }
    return bin;
} 