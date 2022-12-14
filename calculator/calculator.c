/* 8. Write a program to design a calculator using switch case that can perform
addition,
subtraction, multiplication, division, remainder, gcd, sin (theta), cos(theta),
tan (theta),
pow, sqrt, degree to radian, radian to degree etc.*/

#include<stdio.h>
#include<math.h>

//defining value of mathematical PI
//#define PI 3.14159
#define PI acos(-1.0)


//function lists
void sum();
void difference();
void multiplication();
void division();
int gcd();
void division();
void _remainder();
void _pow();
void _sqrt();
double degree_to_radian(double z);
double radian_to_degree(double z);
int choice();
double angle_input();
void _sin();
void _cos();
void _tan();


int main(void)
{
    int choice;
    double radian,theta;
    //presenting all options to user
    printf("choose the operation you want to perform from below list -- \n");
    printf(" 1\t summation \t\t 8\t cos(theta) \n 2\t subtraction \t\t 9\t tan(theta)\n");
    printf(" 3\t multiplication \t 10\t pow \n");
    printf(" 4\t division \t\t 11\t sqrt \n 5\t remainder \t\t 12\t degree to radian \n");
    printf(" 6\t gcd \t\t \t 13\t radian to degree \n 7\t sin(theta) \n");
    printf("your choice = ");
    scanf("%d",&choice);

    switch(choice){
            case 1 :{
                sum();
                break;
            }
            case 2 :{
                difference();
                break;
            }
            case 3 :{
                multiplication();
            }
            case 4 :{
                division();
                break;
            }
            case 5 :{
                _remainder();
                break;
            }
            case 6 :{
                gcd();
                break;
            }
            case 7 :{
                _sin();
                break;
            }
            case 8 :{
                _cos();
                break;
            }
            case 9 :{
                _tan();
                break;
            }
            case 10 :{
                _pow();
                break;
            }
            case 11 :{
                _sqrt();
                break;
            }
            case 12 :{
                double theta;
                printf("enter the angle in degree measure \n");
                scanf("%lf",&theta);
                degree_to_radian(theta);
                break;
            }
            case 13 :{
                double radian;
                printf("enter angle in radian measure \n");
                scanf("%lf",&radian);
                radian_to_degree(radian);
                break;
            }
            default :{
                printf("wrong input/choice \n");
            }
        }
        return 0;
}


void sum(){
    float a,b;
    printf("enter numbers \n");
    scanf("%f %f",&a,&b);
    printf("sum = %f \n",a+b);
}

void difference(){
    float a,b;
    printf("enter numbers \n");
    scanf("%f %f",&a,&b);
    printf("difference = %f \n",a-b);
}

void multiplication(){
    float a,b;
    printf("enter numbers \n");
    scanf("%f %f",&a,&b);
    printf("product = %f \n",a*b);
}

void division(){
    float a,b;
    printf("enter numbers \n");
    scanf("%f %f",&a,&b);
    printf("division = %f \n",a/b);
}

void _remainder(){
    int a,b; //a%b can only work with integers
    printf("enter numbers \n");
    scanf("%d %d",&a,&b);
    printf("remainder = %f",a%b);
}

void _fraction_mod(){
    printf("enter numbers for remainder \n");
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%lf raised to %lf = %lf \n",a,b,fmod(a,b)); //fmod 
}

int gcd(){
    int x,y;
    printf("enter numbers for gcd operation \n");
    scanf("%d %d",&x,&y);
    //gcd algo
    if(x==0 || y==0){
        printf("invalid input either a=0 or b=0 which in not allowed \n");
        return 1;
    }
    while(x!=y){
        if(x>y)
            x -= y;
        else
            y -= x;
    }
    printf("gcd = %d \n",y); 
}

double degree_to_radian(double z){
    double theta ,rad;
    theta = z;
    rad = (theta * PI)/180;
    printf("%lf degree = %lf rad \n",theta, rad);
    return rad;
}

double radian_to_degree(double z){
    double theta,rad;
    rad = z;
    theta = (180 * rad)/PI;
    printf("%lf rad = %lf degree \n",rad,theta);
    return theta;
}

//choice function for radian angle input or degree angle input
int choice(){
    int a;
    printf("press 1 for radian angle input \n2 for degree input \n");
    scanf("%d",&a);
    if(a==1 || a==2)
        return a;
    else
        printf("wrong choice \n");

    return 3;
}

double angle_input(){
    double angle;
    int choice_a = choice();
    if(choice_a == 1){
        printf("enter angle in radian as per your choice\n");
        scanf("%lf",&angle);
    }
    else if(choice_a==2){
        printf("enter angle in degree as per your choice\n");
        scanf("%lf",&angle);
        angle = degree_to_radian(angle);
    }
    return angle;
}

void _tan(){
    double angle;
    angle = angle_input();
    printf("tan(%lf) = %lf \n",angle, tan(angle));
}

void _cos(){
    double angle;
    angle = angle_input();
    printf("cos(%lf) = %lf \n",angle, cos(angle));
}

void _sin(){
    double angle;
    angle = angle_input();
    printf("sin(%lf) = %lf \n", angle, sin(angle));
}

void _pow(){ //pow() takes double input and gives double output
    double a,b;
    printf("enter base \n");
    scanf("%lf",&a);
    printf("enter power \n");
    scanf("%lf",&b);
    printf("%lf raised to %lf = %lf \n",a,b,pow(a,b));
}

void _sqrt(){ //sqrt() takes and returns double input
    double a;
    printf("enter number \n");
    scanf("%lf",&a);
    printf("sqrt of (%lf) = %lf\n",a,sqrt(a));
}