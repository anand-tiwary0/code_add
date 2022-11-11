/* 9. Write a C program to input month number and print number of days in that month.*/

#include <stdio.h>

int main(void)
{
    int i; 
    printf("enter month - number \n");
    scanf("%d",&i);

    if(i==1||i==3||i==7||i==8||i==10||i==12)
        printf("31 days \n");
    else if(i==2)
        printf("27 or 28 days(for leap year) \n");
    else if(i==4||i==6||i==9||i==11)
        printf("30 days \n");
    else
        printf("invalid month number \n");
    
    return 0;
}