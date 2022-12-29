/* 2. Write a program to evaluate the following series:

1+3+5+7+...._upto n

1-3+5-7+......_upto n

1/1!+2/2!+3/3!+....._upto nth term

1/1!-3/3!+5/5!-....... _upto nth term. */


#include <stdio.h>

int fact(int n){
    if(n == 0){
        return 1;      //base case of recursion
    }
    //recursive calls
    return n*(fact(n-1));
}

float series1(int n){
    float sum;
    int i;
    sum = 0;
    for(i=1; i<=n; i+=2){
        sum = sum + i;
        if(i==1){
        printf("%d ",i);
        continue;
        }
        printf(" + %d ",i);
    }
    return sum;
}

float series2(int n){
    float sum;
    int i,count;
    sum = 0,count=1;
    for(i=1; i<=n; i+=2){
        if(count%2 == 0 ){
            sum = sum - i;
            count++;
            printf(" - %d",i);
        }
        else{
            sum = sum + i;
            count++;
            if(i==1){
                printf("%d",i);
                continue;
            }
            printf(" + %d",i);
        }
    }
    return sum;
}

float series3(int n){
    float sum;
    int i,count;
    sum = 0;
    for(i=1; i<=n; i++){
        sum = sum + (i/(float)fact(i));
        if(i==1){
            printf("%d/%d! ",i,i);
            continue;
        }
        printf("+ %d/%d!",i,i);
    }
    return sum;
}

float series4(int n){
    float sum;
    int i, count;
    sum =0;
    count = 1;
    for(i=1; i<=n; i+=2){
        if(!(count%2==0)){
            sum = sum + ((float)i/fact(i));
            count++;
            printf("- %d/%d!",i,i);
        }
        else{
            sum = sum - ((float)i/fact(i));
            count++;
            if(i==1){
                printf("%d/%d! ",i,i);
                continue;
            }
            printf("+ %d/%d!",i,i);
        }
    }

    return sum;
}

int terms(){
    int upto;
    printf("enter number _upto value(n) for the series : ");
    scanf("%d",&upto);
    return upto;
}

int main(void){
    float sum;
    int _upto,choice;
    sum = 0;
    printf("enter choice for series (1,2,3,4) : ");
    scanf("%d",&choice);
    _upto = terms();

    switch(choice){
        case 1 : sum = series1(_upto);
                 break;
        case 2 : sum = series2(_upto);
                 break;
        case 3 : sum = series3(_upto);
                 break;
        case 4 : sum = series4(_upto);
                 break;
        default:
                printf("wrong choice for series type \n");
    }

    printf(" = %f \n",sum);

    return 0;
}



