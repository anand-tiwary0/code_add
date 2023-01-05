/* 4. Write a C Program to find the GCD of two numbers using function. */

#include <stdio.h>

void _gcd(int , int );
int mod(int);

int main(void){
    int a,b;
    printf("enter numbers to find gcd \n");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d ",a,b);
    //as gcd(a,b)=gcd(-a,b)=gcd(a,-b),gcd(-a,-b);
    //using user defined mod() to handle negative numbers
    _gcd(mod(a),mod(b));
    return 0;
}

int mod(int n){
    if(n<0)
        return (-n);
    else
        return n;
}

void _gcd(int a, int b){
    if(a==0 || b==0){
        printf("invalid input either a=0 or b=0 \n");
    }
    else{
        while(a != b){
            if(a > b)
                a -= b;
            else
                b -= a;
        }
        printf("= %d \n",a);
    }
}