// 1012 - Area - Beecrowd
#include <stdio.h>

int main() {
    // taking 3 floating point numbers (sides/radius of shapes) as input
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    // calculating areas
    double triangle_area = 1.0 / 2 * A * C;
    double circle_area = 3.14159 * C * C;
    double trapezium_area = (A + B) * C / 2;
    double square_area = B * B;
    double rectangle_area = A * B;

    // printing the output
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle_area,
           circle_area, trapezium_area, square_area, rectangle_area);

    return 0;
}
