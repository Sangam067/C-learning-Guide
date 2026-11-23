#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;   //these are the data types

    printf("Enter coordinates of the first point (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of the second point (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //the formula for distance between two points

    printf("Distance between the two points = %.2lf\n", distance);
    return 0;
}