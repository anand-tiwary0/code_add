/*program to test addressof and pointer operations*/

#include <stdio.h>

int main(void)
{
    int a; //this a is a pointer or not;
    //this line will print the hexadecimal address for integer a;
    printf("address of a is = %p \n",&a);
    //this line will print real value to which a is refering to; 
    //as value is uninitialized this will give some garbage value
    //printf("this is the value available at a or a is pointing to = %i \n",*a);
}