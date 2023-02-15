#include <stdio.h>

typedef struct{
    char first[10];
    char second[10];
    char last[10];
}name;
typedef struct {
    name nam;
    int class;
    float weight;
}student;

int main(void){
    student a[10];
    int i;
    for(i=0;i<10; i++){
        printf("enter the name of student \n");
        getc(a[i].nam.first);
        getc(a[i].nam.second);
        getc(a[i].nam.last);
        printf("enter class ");
        scanf("%d",&a[i].class);
        printf("enter weight ");
        scanf("%f",&a[i].weight);
    }

    for(i=0;i<10;i++){
        printf("name of student :: ");
        printf("%s %s %s",a[i].nam.first,a[i].nam.second,a[i].nam.last);
        printf("\n");
        printf("calss :: %d",a[i].class);
        printf("\n");
        printf("wight :: %d",a[i].weight);
    }

    return 0;
}