/*8. Write a program in C to print the range of an input.*/

#include <stdio.h>

int main(void){
    int a;
    printf("enter number \n");
    scanf("%d",&a);

    switch(a)
    {
        case 1 ... 10 :{
            printf("input ranges from 1 to 10 \n");
            break;
        }
        case 11 ... 20 :{
            printf("input ranges from 11 to 20 \n");
            break;
        }
        case 21 ... 30 :{
            printf("input ranges from 21 to 30 \n");
            break;
        }
        case 31 ... 40 :{
            printf("input ranges from 31 to 40 \n");
            break;
        }
        case 41 ... 50 :{
            printf("input ranges from 41 to 50 \n");
            break;
        }
        case 51 ... 60 :{
            printf("input ranges from 51 to 60 \n");
            break;
        }
        case 61 ... 70 :{
            printf("input ranges from 61 to 70 \n");
            break;
        }
        case 71 ... 80 :{
            printf("input ranges from 71 to 80 \n");
            break;
        }
        case 81 ... 90 :{
            printf("input ranges from 81 to 90 \n");
            break;
        }
        case 91 ... 100 :{
            printf("input ranges from 91 to 100 \n");
            break;
        }
        default :{
            printf("you are only allowed to give input in the range 1 - 100 \n");
        }
    }

    return 0;
}