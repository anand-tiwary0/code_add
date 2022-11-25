/* 10. Write a program to print the following pattern:
                           1
                           2      3
                           4      5      6
                           7      8      9       10        */



#include <stdio.h>

int main(void)
{
    int n,i,j,c;
    printf("enter number of rows in pattern \n");
    scanf("%d",&n);

    c = 0;
    
    printf("desired pattern is - \n");
    //loop for each row
    for(i=0; i<n; i++)
    {
        //loop for each column in the current row
        for(j=0; j<=i; j++)
        {
            c = c+1;
            printf("%d  ",c);
        }

        printf("\n");
    }



    return 0;
}