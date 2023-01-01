/* 5. Write a program in C to print all Armstrong numbers between 1 and n. */

#include <stdio.h>
#include <math.h>

int num_length(int);
void armstrong(int);

int main(void){
    int n,length;
    printf("enter upto value(n) : ");
    scanf("%d",&n);
    armstrong(n);
    printf("\n");
    return 0;
}

int num_length(int n){
    int count;
    count = 0;
    while(n!=0){
        count++;
        n = n/10;
    }
    return count;
}

void armstrong(int n){
    int sum,temp,rem,numberlen,i;
    //for loop to iterate over numbers from 1 to n;

    printf("armstrong numbers between 1 to %d \n",n);
    for(i=1; i<=n; i++)
    {
        sum = 0;
        numberlen = num_length(i);
        temp = i;
        //while loop --> each number is tested armstrong or not
        while(temp != 0){
            rem = temp%10;
            sum = sum + pow(rem,numberlen);
            temp = temp/10;
        }

        if(sum == i){
            printf("%d  ",i);
        }
    }  
}