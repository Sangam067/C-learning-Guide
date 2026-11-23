#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, sp, area;

    printf("Enter three sides of the triangle (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    sp = (a + b + c) / 2.0; // Semi-perimeter formula
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c)); // Heron's formula for area

    printf("Semi-perimeter (sp) = %.2lf\n", sp);
    printf("Area of triangle = %.2lf\n", area);//area
    return 0;
}