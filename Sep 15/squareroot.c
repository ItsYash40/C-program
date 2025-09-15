
#include<stdio.h>
#include<math.h>
int main(){
   double r, s;
   printf("Enter the  numbers: ");
   scanf("%lf%lf",&r,&s);
  

    double  sqrt1= sqrt(r);
    double  sqrt2= sqrt(s);
    double sum= r+s;
    double  sqrt3= sqrt(sum);

   printf("The squareroot 1st number,2nd number , Sum of two number = %.5f ,%.5f,%.5f\n ", sqrt1  ,sqrt2,sqrt3);
   
   return 0;
}