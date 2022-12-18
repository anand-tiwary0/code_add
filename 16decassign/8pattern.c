/* 8. Write a program to print the following pattern:

    A
    A B
    A B C
    A B C D
    A B C D E    */

#include <stdio.h>

int main(void)
{
    int n,i,j;
    printf("enter number of rows in pattern \n");
    scanf("%d",&n);

    //outer for loop for rows
    for(i=0; i<n; i++)
    {
        //inner for loop for each columns in row
        for(j=0; j<=i; j++)
        {
            printf("%c ",('A'+j));
        }
        
        printf("\n");
    }

    return 0;
}