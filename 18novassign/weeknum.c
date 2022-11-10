/* 8. Write a C program to input week number and print week day.*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("enter week number(1 to 7) \n");
    scanf("%d",&a);

    if(a == 1)
        printf("sunday \n");
    else if(a == 2)
        printf("monday \n");
    else if(a == 3)
        printf("tuesday \n");
    else if(a == 4)
        printf("wednesday \n");
    else if(a == 5)
        printf("thursday \n");
    else if(a == 6)
        printf("friday \n");
    else if(a == 7)
        printf("saturday \n");
    else
        printf("invalid week number \n");

return 0;
}