/* Write a C program that can check whether an input is an alphabet, digit, whitespace,
or special character.*/

#include <stdio.h>

int main(void)
{
    char c;

    //taking character input
    printf("enter character \n");
    scanf("%c",&c);

    //different checks for 
    if(c>='A' && c<='Z' || c>='a' && c<='z')
        printf("input is alphabetical \n");
    else if(c>='0' && c<='9')
        printf("input is digit \n");
    else if(c == ' ')
        printf("input is whitespace char \n");
    else
        printf("input is a special character \n");
    
    return 0;
}