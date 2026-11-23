#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, r1, r2;

    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(disc)) / (2 * a); // Quadratic formula 
    r2 = (-b - sqrt(disc)) / (2 * a);

    printf("Root 1 = %.2lf\n", r1);
    printf("Root 2 = %.2lf\n", r2);
    return 0;
}