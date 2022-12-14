/* 7. Write a program to print all ascii values using for loop.*/

#include <stdio.h>

int main(void)
{ 
    //ascii value from 0 to 31 and 127(DEL) are not printable(called ascii control characters)
        //also 128 to 255 are called extended ASCII
    printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\t");
    printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tch");
    for(int i=0; i<=255; i++)
    {
        printf(" %d\t%c\t",i,i);
    }
    printf("\n");
    return 0;
}