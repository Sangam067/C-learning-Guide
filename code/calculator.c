#include <stdio.h>

        int main() {
            
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition (+):       %d\n", num1 + num2);
    printf("Subtraction (-):    %d\n", num1 - num2);
    printf("Multiplication (*): %d\n", num1 * num2);
    printf("Integer Div (/):    %d\n", num1 / num2);
    printf("Remainder (%%):      %d\n", num1 % num2);
    printf("Exact Div:          %.2f\n", (float)num1 / num2);

    return 0;
}