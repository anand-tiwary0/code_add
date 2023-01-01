/*6. Write a program in C to check whether a number is Neon number or not.

For example: 9 is a Neon number

square(9)=81, 8+1=9

Here, after finding the square if we can find the sum of digits
 and if we get the same number as sum, we will conclude that it is a Neon number.
*/

#include <stdio.h>
#include <stdbool.h>

bool neoncheck(int n);

int main(void){
    int n;
    bool store;
    printf("enter number \n");
    scanf("%d",&n);
    store = neoncheck(n);
    if(store == true){
        printf("%d is neon \n",n);
    }
    else
        printf("%d is not neon\n",n);
    return 0;
}

bool neoncheck(int n){
    int square, sum;
    sum = 0;
    square = n*n;
    while(square != 0){
        sum = sum + square%10;
        square = square/10;
    }
    if(n == sum){
        return true;
    }
    else
        return false;
}