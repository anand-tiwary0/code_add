#include <stdio.h>

int main(void){
    int a=100;
    while(a>0){
        printf("%.2f ",a/2.0);
        a = a/2.0;
    }
    return 0;
}