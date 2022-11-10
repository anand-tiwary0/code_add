/* 6. Write a program in C to check whether an input is vowel or consonant */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>   //for using toupper() function

int main(void){
    char a;
    do
    {
        printf("enter alphabetical character \n");
        scanf("%c",&a);
        a = toupper(a);
    }
    while((a<'A'|| a>'Z'));
    

    /*toupper() function return uppercase if char is lowercase 
    uppercase characters remain unchanged */ 
    a = toupper(a); 
    if(a =='A' || a=='E' || a=='I' || a=='O' || a=='U')
        printf("entered character is a vowel \n");
    else
        printf("entered character is consonant \n");
    
    return 0;
}