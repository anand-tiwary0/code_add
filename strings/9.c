//total vowels and consonants
#include <ctype.h>
#include <stdio.h>

int * vowel_consonant(char * a,int *);
#define MAX 100

int main(void){
    printf("enter array elements :: \n");
    char a[MAX];
    int total[] = {0,0};
    fgets(a,MAX,stdin);
    vowel_consonant(a,total);
    printf("total vowels : %d and consonant : %d \n",total[0],total[1]);
    return 0;
}

int * vowel_consonant(char * a,int *total){
    for(int i=0; a[i] != '\0'; i++){
        a[i] = toupper(a[i]);
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i] == 'O' || a[i] == 'U'){
            total[0] = total[0] + 1;
        }
        else if(a[i]>=65 && a[i]<=90){
            total[1] = total[1] + 1;
        }
    }
    return total;
}