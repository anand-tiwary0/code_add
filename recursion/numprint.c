/* printing 1 to n using recursion*/

#include <stdio.h>

int num(int n);

int main()
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);
    num(n);
    printf("\n");
    return 0;
}

int num(int n)
{
    //base case
    if(n == 0)
    {
        return 0;
    }
    //function call each time with reaching towards base case
    num(n -1);

    //doing actual thing for each function call
    printf("%d  ",n);

    return 0;
}