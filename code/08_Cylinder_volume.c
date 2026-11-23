#include <stdio.h>

int main() {
    const double PI = 3.14159265358979;
    double r, h, volume;

    printf("Enter radius (r) and height (h) of the cylinder: ");
    scanf("%lf %lf", &r, &h);

    volume = PI * r * r * h;

    printf("Volume of the given cylinder = %.2lf\n", volume);
    return 0;
}