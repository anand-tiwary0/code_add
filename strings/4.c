#include <stdio.h>

int main(void){
    char a[] = {"lets separate this string characters"};
    
    int size_of_string = sizeof(a)/sizeof(a[0]);
    printf("all characters in string are (in reverse order) \n");
    for(int i=size_of_string-1; i>=0; i--){
        printf("%c ",*(a+i));
    }
    printf("\n");
    return 0;
}