/*7. Write a C program to calculate electricity bill using if-else statements.
For first 50 units – Rs. 4.00/unit
next 100 units – Rs. 5.50/unit
next 100 units – Rs. 6.00/unit
above 250 – Rs. 6.50/unit */

#include <stdio.h>

#define UNDER_50 4.00
#define FIRST_100 5.50
#define SECOND_100 6.00
#define ABOVE_250 6.50

int main(void){
    float units,price,rem_units;
    price = 0;
    printf("enter the units of electricity used :: ");
    scanf("%f",&units);

    if(units < 0){
        printf("consumed units can't be negative exiting program\n");
        goto exit;
    }

    if(units >=0 && units <= 50){
        price = UNDER_50 * units;
    }
    else if(units>50 && units <= 150 ){
        price = 50 * UNDER_50;
        rem_units = units - 50;
        price = price + FIRST_100 * rem_units;
    }
    else if(units>150 && units<=250){
        price = 50 * UNDER_50 + 100 * FIRST_100;
        rem_units = units - (50 + 100);
        price = price + rem_units * SECOND_100;
    }
    else{
        price = 50*UNDER_50 + 100*FIRST_100 + 100*SECOND_100 + ABOVE_250 * (units - 250); 
    }

    //printing bills
    printf("so total bill for %.4f units as per rates = %.4f \n",units,price);

    exit: 
    return 0;
}