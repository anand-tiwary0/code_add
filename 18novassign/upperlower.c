/* 7. Write a C program to check whether a character is uppercase or lowercase alphabet. */

#include <stdio.h>

int main(void)
{
    char c;
    printf("enter character \n");
    scanf("%c",&c);

    if(c>='a' && c<='z')
        printf("character is lowercase alphabet \n");
    else if(c>='A' && c<='Z')
        printf("character is uppercase alphabet \n");
    else
        printf("character is not alphabetical \n");

    return 0;
    
}