#include <stdio.h>

int main(void)
{
    unsigned int i;
    for(i=0;i<=255; i++)
    {
        //ascii value from 0 to 31 and 127(DEL) are not printable(called ascii control characters)
        //also 128 to 255 are called extended ASCII
        printf("%u -> %c \t",i,i);
    }
    printf("\n");
    return 0;
}

// #include <stdio.h>

// int main(void)
// { 
//   int i;
//     printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\t");
//     printf("ASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tchar\tASCII\tch");
//     for( i=0; i<=127; i++)
//     {
//         printf(" %d\t%c\t",i,i);
//     }
//     printf("\n");
//     return 0;
// }
