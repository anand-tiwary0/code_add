/* %o is used to print unsigned octal integer . octal integer value
 always starts with o value 
 %x is used to print unsigned hexadecimal integer . hexadecimal integer value always
 starts with ox value and if this format specifier is used then characters a,b,c,d,e 
 involved in hexadecimal number system are printed in lowercase
 %X is used to print unsigned hexadecimal integer if this format specifier is used A,B etc
 involved in hexadecimal number system are printed in uppercase*/

 #include <stdio.h>

 int main(void)
 {
    int a;
    a = 123;
    printf("in hexa = %X \n",a);
    printf("in octal = %o \n",a);
    printf("in hexa(lowecase alpha ) = %x \n",a);
    return 0;
 }