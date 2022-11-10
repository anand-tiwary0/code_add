#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s;
    s = malloc(15 * sizeof(char));
    if(s == NULL)
    {
        printf("not able to allocate \n ");
        return 0;
    }

    printf("enter your name \n");
    scanf("%s",s);
    printf("hello %s welcome! \n",s);
    return 0;
}