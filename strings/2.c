#include <stdio.h>

int _strlen(char *);
int main(void){
    printf("enter the string ");
    char a[40];
    fgets(a,40,stdin);
    printf("your stiring is : %s \n",a);
    printf("size of stirng is %d \n",_strlen(a));
    return 0;
}

int _strlen(char *a){
    int i;
//    for(i=0;a[i];i++);
//    return i;

   while(a[i] != '\0'){
    i++;
   }
   return i;
}