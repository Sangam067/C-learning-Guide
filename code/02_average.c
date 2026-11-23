#include <stdio.h>

int main(void) {
    double n1, n2, n3, avg;

    printf("Enter three real numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    avg = (n1 + n2 + n3) / 3.0;

    printf("Average = %.2lf\n", avg);
    return 0;
}  