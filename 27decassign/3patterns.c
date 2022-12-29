/* 3. Write a program to print the following pattern:

1
2 3
4 5 6
7 8 9 10
upto n number of rows.

1
01
101
0101
10101....
upto n number of rows.

1
121
12321
1234321......upto n number of rows. */


#include <stdio.h>

void pattern_1(int n);
void pattern_2(int n);
void pattern_3(int n);
int _choice(void);

int main(void)
{
    int n,choice;
    printf("enter number of rows(n) for pattern\n");
    scanf("%d",&n);
    choice = _choice();

    switch(choice)
    {
        case 1:  pattern_1(n);
                    break;
        case 2: pattern_2(n);
                break;
        case 3: pattern_3(n);
                break;
        case 4: pattern_1(n);
                printf("--------------------------\n");
                pattern_2(n);
                printf("--------------------------\n");
                pattern_3(n);
                printf("--------------------------\n");
                break;
        default: printf("wrong chioce \n");
    }

return 0;
}
int _choice(void){
    int n;
    printf("enter pattern number to print :(1,2,3) ");
    printf("else press 4 to print all patterns together :::  ");
    scanf("%d",&n);
    return n;
}
void pattern_1(int n){
    int i,j,count;
    count = 0;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d  ",++count);
        }
        printf("\n");
    }
}
void pattern_2(int n){
    int i,j,count;
    for(i=1; i<=n; i++){
        if(i%2==0)
            count = 0;
        else
            count = 1;
        for(j=1; j<=i; j++){
            printf("%d ",count);
            if(count==0)
                count++;
            else
                count--;
        }
        printf("\n");
    }
    
}
void pattern_3(int n){
    int i,j,count,t;
    count = 0;
    for(i=1; i<=n; i++){
        count = 0;
        //number of elements in row = 2 * row - 1;
        for(j=1,t=2*i-1; j<=t; j++){
            //j increases upto row number than it decreases
            if(j<=i){
                printf("%d",++count);
            }
            else{
                printf("%d",--count);
            }
        }
        printf("\n");
    }
}