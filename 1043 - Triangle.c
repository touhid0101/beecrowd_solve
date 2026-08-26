// 1043 - Triangle - Beecrowd
#include <stdio.h>

int main() {
    // taking 3 sides of a triangle as input
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // sorting 3 sides of the triangle
    double temp; // clang-format off
    if (b > a) { temp = a; a = b; b = temp; }
    if (c > a) { temp = a; a = c; c = temp; }
    if (c > b) { temp = b; b = c; c = temp; }
    // clang-format on

    // calculating perimeter of triangle and area of trapezium
    if (a < b + c) {
        double perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        double area = (a + b) * (c / 2);
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
