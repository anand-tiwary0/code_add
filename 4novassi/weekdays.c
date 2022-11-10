/*wap to print days of week*/

#include <stdio.h>

int main(void)
{
    int i;
    printf("enter the nth day \n");
    scanf("%d",&i);
    
    //printing day according to user input
    if(i==1)
        printf("sunday \n");
    else if(i == 2)
        printf("monday \n");
    else if(i == 3)
        printf("tuesday \n");
    else if(i == 4)
        printf("wednesday \n");
    else if(i == 5)
        printf("thrusday \n");
    else if(i == 6)
        printf("friday \n");
    else if(i == 7)
        printf("saturday \n");
    else
        printf("wrong input for 'day number'\n");

return 0;
}