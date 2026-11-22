#include <stdio.h>

    int main() 
    {
    int age = 20;
    float height = 5.9f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);   // .1 prints 1 decimal place
    printf("Pi: %.6lf\n", pi);              // .6 prints 6 decimal places
    printf("Grade: %c\n", grade);

    return 0;
    }