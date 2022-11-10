/*from digit to word*/

#include <stdio.h>
//function area


int main(int argc,char *argv[])
{
    for(int i=0; i<argc; i++)
    {
        printf("value =%d ",*argv+i);
    }
    if(argc==1)
    {
        printf("");
    }
    printf("hello");

    return 0;
}

