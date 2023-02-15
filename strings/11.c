//sort the array

#include <stdio.h>

#define MAX 100

void sort(char *a,int size);

int main(void){
    char a[MAX];
    printf("enter the array  :: ");
    int size = sizeof(a)/sizeof(a[0]);
    fgets(a,MAX,stdin);

    sort(a,size);
    for(int i=0; a[i] != '\0'; i++){
        printf("%c",a[i]);
    }
    printf("\n");

    return 0;
}

void sort(char *a,int size){
    for(int i=0;i < size-2; i++ ){
        int min = a[i];
        int count = 0;
        for(int j=i+1; j<=size-2; j++){
            if(a[j]<a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                count++;
            }
        }
        if(count != 0){
            break;
        }
    }
}