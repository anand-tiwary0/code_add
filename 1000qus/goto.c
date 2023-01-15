#include <stdio.h>

void main(){
    int number;
    do
    {
        printf("enter +ve number to break the loop : ");
        scanf("%d",&number);
        if(number <= 0){
            continue;
        }
        printf("entered number is %d",number);
        goto number;
    }
    while(number!=20);
    number :
        printf("exited successfully\n");
}