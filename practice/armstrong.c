#include<stdio.h>

int main()
{
    int num,rem,result=0,temp;
    
    printf("Input your number:");
    scanf("%d",&num);
    temp=num;
    
while(num!=0)
 {
    rem = num%10;
    result = result+(rem*rem*rem);
    num = num/10;
 }

if(result==temp)
    printf("%d is an armstrong number\n",temp);
else
    printf("%d is not an armstrong number\n",temp);
    
    return 0;
}