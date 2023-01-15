/*1. Write a C Program to perform the multiplication of two matrices. */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10    //for matrix dimension 

//program can do matrix multiplication for floats (trade off - more memory)

//function declarations
int row_col(int);
void matrixinput(float [][MAX],int,int);
/*first dimension is not compulsory as float[][] will decay to float(*)[] when
passed as parameter -c99*/ 
void multiply(float [][MAX],float [][MAX],float [][MAX],int,int,int);
void print_matrix(float [][MAX],int,int);


static int count = 1;
/*static variables declared and floatialized for
  few variables which are used multiple times in differnet functions
  as local scope so using 'static' for better space complexity*/
static int i=0,j=0,k=0;

int main(void){
    int r1,r2,c1,c2;
    float matrix1[MAX][MAX];
    float matrix2[MAX][MAX],multi[MAX][MAX];
    r1 = row_col(1);
    c1 = row_col(1);
    r2 = row_col(2);
    c2 = row_col(2);

    //checking if matices are compatible for multiplication or not
    if(c1==r2){
        printf("matrices are compatible for multiplication \n");
        printf("enter the elements of matrix 1 \n");
        matrixinput(matrix1,r1,c1);
        printf("enter the elements of matrix 2 \n");
        matrixinput(matrix2,r2,c2);
        multiply(matrix1,matrix2,multi,r1,c2,c1);
        print_matrix(multi,r1,c2);
    }
    else{
        printf("matrices are not compatible for multiplication as col1 != row2 \n");
    }

    return 0;
}

//function for number of rows and col inputs
int row_col(int i){
    int size;
    do{
        if(count%2==0)
            printf("enter number of cols. for matrix %d  ::  ",i);
        else
            printf("enter number of rows for matrix %d  ::  ",i);
        
        scanf("%d",&size);
        count++;
    }while(size<0);
}

void matrixinput(float matrix[MAX][MAX],int row,int col){
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%f",&matrix[i][j]);
        }
    }
}

void multiply(float m1[MAX][MAX],float m2[MAX][MAX],float mul[MAX][MAX],int r1,int c2,int c1){ 
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            mul[i][j] = 0;
            for(k=0; k<c1; k++){
                mul[i][j] = mul[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
}

void print_matrix(float mul[MAX][MAX],int r1,int c2){
    printf("result of matrix multiplication is \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%.3f\t",mul[i][j]);
        }
        printf("\n");
    }
}










































