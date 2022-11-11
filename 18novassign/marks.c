/* 13. Write a C program to input marks of five subjects Physics,
 Chemistry, Biology, Mathematics and
Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include <stdio.h>

int main(void)
{
    float a,b,c,d,e,percent;
    percent =0;
    printf("input marks for sunbjects \n");
    printf("Physics :");
    scanf("%f",&a);
    printf("chemistry :");
    scanf("%f",&b);
    printf("biology :");
    scanf("%f",&c);
    printf("mathematics :");
    scanf("%f",&d);
    printf("computer :");
    scanf("%f",&e);

    percent = ((a+b+c+d+e)/500)*100;
    
    if(percent >= 90)
        printf("percentage = %.3f ->> Grade A \n",percent);
    else if(percent >= 80)
        printf("percentage = %.3f ->> Grade B \n",percent);
    else if(percent >= 70)
        printf("percentage = %.3f ->> Grade C \n",percent);
    else if(percent >= 60)
        printf("percentage = %.3f ->> Grade D \n",percent);
    else if(percent >= 40)
        printf("percentage = %.3f ->> Grade E \n",percent);
    else if(percent < 40)
        printf("percentage = %.3f ->> Grade F \n",percent);
    
    return 0;
}