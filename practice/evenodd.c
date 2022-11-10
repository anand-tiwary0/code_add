#include <stdio.h>
#include <stdbool.h>

bool oddeven(int);

int main(void)
{
    int a;
    printf("enter number \n");

    scanf("%d",&a);
    bool b = oddeven(a);
    if(b == true)
        printf("number entered is EVEN \n ");
    else
        printf("number entered is ODD \n");
    
    return 0;

}

bool oddeven(int a )
{
    if(a % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}