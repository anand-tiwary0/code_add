/* 8. Write a program to design a calculator using switch case that can perform addition,
 subtraction, multiplication, division, remainder, gcd, sin (theta), cos(theta), tan (theta),
  pow, sqrt, degree to radian, radian to degree etc.*/

#include <stdio.h>
#include <math.h>

//#define PI acos(-1.0)
#define PI 3.14159

int main(void)
{
    int c,x,y,q;
    float a,b,powr,rad,theta;
    printf("choose the operation you want to perform from below list -- \n");
    printf(" 1\t summation \t\t 8\t cos(theta) \n 2\t subtraction \t\t 9\t tan(theta) \n");
    printf(" 3\t multiplication \t 10\t pow \n");
    printf(" 4\t division \t\t 11\t sqrt \n 5\t remainder \t\t 12\t degree to radian \n");
    printf(" 6\t gcd \t\t \t 13\t radian to degree \n 7\t sin(theta) \n");

    printf("your choice = ");
    scanf("%d",&c);
    
    switch(c)
    {
      case 1:
            {
                printf("enter oprands to add \n");
                scanf("%f %f",&a,&b);
                printf("sum = %f \n",a+b);

                break;
            }

      case 2 :
            {
                printf("enter oprands for subtraction \n");
                scanf("%f %f",&a,&b);
                printf("diff = %f \n",a-b);

                break;
            }
      
      case 3  :
            {
                printf("enter oprands for multiplication \n");
                scanf("%f %f",&a,&b);
                printf("multiplication = %f \n",a*b);

                break;
            }

      case 4  :
            {
                printf("enter oprands for real division \n");
                scanf("%f %f",&a,&b);
                printf("div result = %f \n",a/b);
                break;
            }
      
      case 5  :
            {
                printf("enter oprands for ramainder op\n");
                scanf("%d %d",&x,&y);
                printf("remainder op = %d \n",(x%y));

                break;
            }

      case 6  :
            {
              printf("enter numbers for gcd operation \n");
              scanf("%d %d",&x,&y);

              //gcd algo
              if(x==0 || y==0)
              {
                printf("invalid input either a=0 or b=0 which in not allowed \n");
                return 1;
              }
              while(x!=y)
              {
                if(x>y)
                  x -= y;
                else
                  y -= x;
              }

              printf("gcd = %d \n",y);

              break;
            }

      case 12  :
            {
                printf("enter the angle in degree measure \n");
                scanf("%f",&theta);

                rad = (theta * PI)/180;
                printf("%f degree = %.4f rad \n",theta, rad);
                break;
            }

      case 13  :
            {
                printf("enter the angle in radian measure \n");
                scanf("%f",&rad);

                theta = (rad * 180)/PI;
                printf("%f rad = %.4f degree\n",rad,theta);

                break;
            }

      case 7  :
            {
                printf("enter the angle(in radian only) \n");
              //as sin function in math.h only takes radian measures as input

                scanf("%f",&a);
                printf("sin(%f) = %f \n",a, sin(a));
                break;
            }
      case 8  :
            {
              printf("enter the angle(in radian only) \n");
              scanf("%f",&a);
              printf("cos(%f) = %f \n",a, cos(a));
              break;
            }

      case 9  :
            {
              printf("enter the angle(in radian only) \n");

              scanf("%f",&a);
              printf("tan(%f) = %f \n",a, tan(a));
              break;
            }

      case 10  :
            {
                printf("enter the number = ");
                scanf("%f",&a);
                printf("power value = ");
                scanf("%f",&powr);

                printf("%f raised to %f = %lf \n",a,powr,pow(a,powr));
                break;
            }

      case 11  :
            {
                printf("enter number for sqrt operation\n");
                scanf("%f",&a);

                printf("sqrt of (%f) = %f \n",a, sqrt(a));
                break;
            }

        default :
            {
              printf("invalid choice for operation \n");
            }
    }

 return 0;
}