#include <stdio.h>

int main(void)
{
    int n;
    printf("enter the size for pattern \n");
    scanf("%d",&n);

    printf("desired pattern is :--->\n");

    //outer for loop for traversing each row
    for (int i=1; i<=n; i++)
    {
        //inner for loop for each coloumn or actually putting things in each rows
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}