#include <stdio.h>

int main() {
    double c, f, conv_f, conv_c;

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);
    conv_f = ((9.0 / 5.0) * c) + 32.0;
    printf("%.2lf C = %.2lf F\n\n", c, conv_f);

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    conv_c = (5.0 / 9.0) * (f - 32.0);
    printf("%.2lf F = %.2lf C\n", f, conv_c);

    return 0;
}