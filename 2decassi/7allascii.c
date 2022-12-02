/* 7. Write a program to print all ascii values using for loop.*/

#include <stdio.h>

int main(void)
{ 
    printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\t");
    printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tch");
    for(int i=0; i<=127; i++)
    {
        printf(" %d\t%c\t",i,i);
    }
    printf("\n");
    return 0;
}