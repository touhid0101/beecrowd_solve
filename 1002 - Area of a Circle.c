// 1002 - Area of a Circle - Beecrowd
#include <stdio.h>

int main() {
    // taking radius as input
    double radius;
    scanf("%lf", &radius);

    // calculating area
    double area = 3.14159 * radius * radius;

    // printing the output with 4 decimal places precision
    printf("A=%.4lf\n", area);

    return 0;
}