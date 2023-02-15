#include <stdio.h>

int main(void){
    int n,i,j,temp;
    printf("enter the number of elements in array ");
    scanf("%d",&n);
    int arr[n];
    printf("arry elements \n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("array after sorting \n");
    for(i=0; i<=n-1; i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}