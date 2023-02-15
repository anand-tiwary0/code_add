#include <stdio.h>

int gcd(int,int);

int main(void){
    printf("enter the numbers to find gcd \n");
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        int temp = a;
        a = b;
        b = temp;
    }
    printf("%d is the gcd(%d,%d) \n", gcd(a,b),a,b);
    return 0;
}

int gcd(int a,int b){
    if(b==0){
        return a;
    }  
    return gcd(b,a%b);
}