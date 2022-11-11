/* 14. Write a C program to input basic salary of an employee and 
calculate its Gross salary according to
following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>

int main(void)
{
    float salary,hra,da;
    hra = 0;
    da = 0;
    printf("enter Basic salary \n");
    scanf("%f",&salary);
    
    if(salary<=10000)
    {
        hra = (salary*20)/100;
        da = (salary*80)/100;
    }
    else if(salary<=20000)
    {
        hra = (salary*25)/100;
        da = (salary*90)/100;
    }
    else if(salary>20000)
    {
        hra = (salary*30)/100;
        da = (salary*95)/100;
    }

    //net salary calculation
    salary = salary + hra + da;

    printf("gross salary(basic salary+da+hra) = %.3f \n",salary);
    return 0;
}