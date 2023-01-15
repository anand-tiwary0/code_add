#include <stdio.h>
    int main()
    {
        int a[5] = {1, 2, 3, 4, 5};
        int i;
        for (i = 0; i < 5; i++)
            printf("%c",(char)a[i]);
            if ((char)a[i] == '5')  //as (char)a[i] just takes binary form as ASCII 
                printf("%d\n", a[i]);
            else
                printf("FAIL\n");
    }