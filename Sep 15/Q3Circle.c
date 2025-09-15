#include <stdio.h>
#define PI 3.14

// Function prototypes
double area(double r);
double circumference(double r);

int main() {
    double r;

    printf("Enter the value of radius: ");
    scanf("%lf", &r);

    printf("The area is: %.2lf\n", area(r));
    printf("The circumference is: %.2lf\n", circumference(r));

    return 0;
}

double area(double r) {
    return PI * (r * r);
}

double circumference(double r) {
    return 2 * PI * r;
}
