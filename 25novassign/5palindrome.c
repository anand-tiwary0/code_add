/* 5. Write a program in C to check whether a number is Palindrome or not.*/

#include <stdio.h>

int main(void)
{
    int n, rev, temp;
    rev = 0;
    printf("enter number \n");
    scanf("%d",&n);

    temp = n; //this temp will be used for looping so n is not changed

    while(temp!=0)
    {
        rev = 10* rev + temp%10;
        temp = temp/10;
    }

    if(rev==n)
        printf("pallindrome number \n");
    else    
        printf("not a pallinrome number \n");


    return 0;
}