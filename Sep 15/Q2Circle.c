# define PI 3.14
#include<stdio.h>
void main(){
   double r;
   printf("Enter the value of radius: ");
   scanf("%lf",&r);

   double area= PI*(r*r);
   double circumference= 2*PI*r;

   printf("The area of circle is = %.5f\n", area);
   printf("The circumference of circle is = %.5f\n", circumference);

}
