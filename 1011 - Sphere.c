// 1011 - Sphere - Beecrowd
#include <stdio.h>

int main() {
    // taking radius as input
    double radius;
    scanf("%lf", &radius);

    // calculating the volume
    double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

    // printing the output with 3 decimal places of precision
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
