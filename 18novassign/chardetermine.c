/* 6. Write a C program to input any character and check whether it is alphabet, digit
        or special character. */

#include <stdio.h>

int main(void)
{
    char c;
    printf("enter character \n");
    scanf("%c",&c);

    if(((c>='a')&&(c<='z')) || ((c>='A')&&(c<='Z')))
        printf("character entered is alphabetical \n");
    else if((c>='0')&&(c<='9'))
        printf("character entered is digit \n");
    else
        printf("character is special character \n");

    return 0;
}