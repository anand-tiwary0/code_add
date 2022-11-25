#include <stdio.h>

int main(void)
{
    char ch;
    FILE *file = fopen("Yashavant Kanetkar - Let Us C (2004, BPB Publications) - libgen.li.pdf","r");
    if(file == NULL)
    {
        printf("can't find file\n");
        return 8;
    }
    while((ch=fgetc(file)) != EOF)
    {
        printf("%c",ch);
    }

    return 0;
}
