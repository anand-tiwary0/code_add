/* printing name using rescursion (n number of time)*/

#include <stdio.h>
int name(int n);

int main()
{
    int n;
    printf("enter number of times (name print) \n");
    scanf("%d",&n);
    name(n);
    return 0;
}

int name(int n)
{
    //base case
    if(n==0)
    {
        return 8;
    }
    //recursive call with decreasing values
    name(n-1);

    printf("my name is tiwary \n");

    return 0;

}