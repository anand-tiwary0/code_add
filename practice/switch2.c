#include <stdio.h>
#include <stdlib.h>

int main(int argc,int argv[] )
{
    char *s;
    s = malloc(argc*sizeof(char));
    printf("enter name of month \n");
    scanf("%s",s);
    switch (*s)
    {
        case "january":
            {
                printf("31 days \n");
                break;
            }
        case "february":
            {
                printf("28 days \n");
                break;
            }
        case "march":
            {
                printf("31 days \n");
                break;
            }
        case "april":
            {
                printf("30 days \n");
                break;
            }
        case "may":
            {
                printf("31 days \n");
                break;
            }
        case "june":
            {
                printf("30 days \n");
                break;
            }
        case "july":
            {
                printf("31 days \n");
                break;
            }
        case "august":
            {
                printf("31 days \n");
                break;
            }
        case "september":
            {
                printf("30 days \n");
                break;
            }  
        case "october":
            {
                printf("31 days \n");
                break;
            } 
        case "november":
            {
                printf("30 days \n");
                break;
            }
        case "december":
            {
                printf("31 days \n");
                break;
            }
        default :
            printf("wrong input for number of month \n") ;   
    }  
    return 0; 

}