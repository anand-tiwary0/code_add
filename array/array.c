#include <stdio.h>

int main(void){
    int a[3];
    for(int i=0; i<3; i++){
        scanf("%d",a+i);
    }
    printf("entered elements are - \n");
    for(int i=0; i<3; i++){
        printf("%d \n",a[i]);    //a[i]  -- means *(a+i)
    }

    return 0;
}