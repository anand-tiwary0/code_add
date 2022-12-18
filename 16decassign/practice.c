#include <stdio.h>

int main(void)
{
   // printf("%c ",'\0');

   //numerical escape sequences get terminated when first character not following digit pattern is encounted
    printf("\3  \a abc");
    printf("\xF3      abc");  
    printf("you said what? ??/n");
    printf("%c \n",'??/n');//trigraph -> //??= sequence of 3 characters starting with ?? and they are used for graphical presentation of some characters
    return 0;
}