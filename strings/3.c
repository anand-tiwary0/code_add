#include <stdio.h>

int main(void){
    char a[] = {"lets separate this string characters"};
    
    int size_of_string = sizeof(a)/sizeof(a[0]);
    printf("all characters in string are \n");
    for(int i=0; i<size_of_string; i++){
        printf("%c  ",*(a+i));
    }
    printf("\n");
    return 0;
}