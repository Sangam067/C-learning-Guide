#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, ci;

    printf("Enter the Principal (P), Rate (R), and Time in years (t): ");
    scanf("%lf %lf %lf", &p, &r, &t);

    ci = p * (pow((1.0 + r / 100.0), t) - 1.0);  // Compound Interest formula

    printf("The Compound Interest is %.2lf\n", ci);
    return 0;
}