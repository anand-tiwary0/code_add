/* 4. Write a C program to check whether a character is alphabet or not.*/

#include <stdio.h>

int main(void)
{
    char c;
    printf("enter character \n");
    scanf("%c",&c);

    if(((c>='a')&&(c<='z')) || ((c>='A')&&(c<='Z')))
        printf("character entered is alphabetical \n");
    else
        printf("character is not alphabetical \n");

return 0;
}