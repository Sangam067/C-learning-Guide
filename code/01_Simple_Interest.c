#include <stdio.h>  //use this code as a reference

int main(void) {
    double p, t, r, interest;

    printf("Enter Principal (P), Time (T), and Rate (R): ");
    scanf("%lf %lf %lf", &p, &t, &r);

    interest = (p * t * r) / 100.0;

    printf("Simple Interest = %.2lf\n", interest);
    return 0;
} 