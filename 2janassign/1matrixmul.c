/* 1. Write a program in C to perform matrix multiplication.*/

#include <stdio.h>

int main(void){
    int r1,r2,c1,c2;
    int a[10][10],b[10][10],mul[10][10],i,j,k;  //using static array
    printf("enter number of rows and columns in first matrix :: ");
    scanf("%d %d",&r1,&c1);
    printf("enter number of rows and columns in second matrix :: ");
    scanf("%d %d",&r2,&c2);
    
    if(r2==c1){
        printf("matrix(es) are compatible for multiplication \n");
        printf("enter the elements of matrix 1 \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the elements of matrix 2 \n");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                scanf("%d",&b[i][j]);
            }
        }
        
        //actual multiplication logic

        //outer for loop to iterate over each row
        for(i=0; i<r1; i++){
            //this for loop to iterate over each column of each row 
            for(j=0; j<c2; j++){
                mul[i][j] = 0;
                //this for loop to keep one index constant in order to get each element of 
                //final matrix multiplication array
                for(k=0; k<c1; k++){
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        //printing out resultant matrix
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d  ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("matrix(es) are of incompatible for multiplication \n");
    }
    return 0;
}