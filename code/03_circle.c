#include <stdio.h>

int main(void) {
    const double PI = 3.14159265;
    double r, area, circ;

    printf("Enter radius of the Circle: ");
    scanf("%lf", &r);  //input here

    area = PI * r * r; //area formula
    circ = 2 * PI * r; //circumference formula

    printf("Area = %.2lf\n", area);  //area
    printf("Circumference = %.2lf\n", circ);
    return 0;
}