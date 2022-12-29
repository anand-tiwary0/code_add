/* 5. Write a program to perform the addition two matrices. */

#include <stdio.h>

int main(void){
int r1,r2,c1,c2,i,j;
printf("enter no of rows and columns for first matrix : ");
scanf("%d %d",&r1,&c1);
printf("enter no of rows and columns for 2nd matrix : ");
scanf("%d %d",&r2,&c2);
int a[r1][c1], b[r2][c2], s[r1][c1];
if(r1==r2 && c1==c2){
    printf("enter the elements of 1st array \n");
    /*taking input for first matrix*/
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d",&(a[i][j]));
        }
    }

    printf("enter the elements of 2nd array \n");
    /*taking input for 2nd matrix*/
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d",&(b[i][j]));
        }
    }

    //summation 
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    //printing resulting array
    printf("resultant matrix = \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("%d  ",s[i][j]);
        }
        printf("\n");
    }
}

else{
    printf("order of matries are equal so incompatible for addition \n");
}


return 0;
}