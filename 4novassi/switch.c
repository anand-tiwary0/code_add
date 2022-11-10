/*wap to print number of days using switch statement*/

#include <stdio.h>

int main(void)
{
    int i;
    printf("enter nth day of week \n");
    scanf("%d",&i);

    //using switch to print day
    switch (i)
    {
        case 1 :
            {
                printf("sunday \n");
                break;
            }
        case 2 :
            {
                printf("monday \n");
                break;
            }
        case 3 :
            {
                printf("tuesday \n");
                break;
            }
        case 4 :
            {
                printf("wednesday \n");
                break;
            }
        case 5 :
            {
                printf("thrusday \n");
                break;
            }
        case 6 :
            {
                printf("friday \n");
                break;
            }
        case 7 :
            {
                printf("satuday \n");
                break;
            }
        default :
                printf("not valid day number \n");
        
    }
    return 0;
}