// 1002 - Area of a Circle - Beecrowd
#include <stdio.h>

int main() {

    double area, radius;
    scanf("%lf", &radius);

    area = 3.14159 * radius * radius;

    printf("A=%.4lf\n", area);

    return 0;
}