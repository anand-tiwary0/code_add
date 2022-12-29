#include <stdio.h>

int main(void){
    int n,i,j,count;
    count = 0;
    pritnf("enter number of rows \n");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            printf("%d ",count++);
        }
    }
}