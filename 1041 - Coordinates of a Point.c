// 1041 - Coordinates of a Point - Beecrowd
#include <stdio.h>

int main() {
    // taking coordinates of a point as input
    double x, y;
    scanf("%lf %lf", &x, &y);

    // finding in which quadrant it falls
    if (x > 0 && y > 0) {
        printf("Q1\n");

    } else if (x < 0 && y > 0) {
        printf("Q2\n");

    } else if (x < 0 && y < 0) {
        printf("Q3\n");

    } else if (x > 0 && y < 0) {
        printf("Q4\n");

    } else if (x == 0 && y == 0) {
        printf("Origem\n");

    } else if (y == 0) {
        printf("Eixo X\n");

    } else if (x == 0) {
        printf("Eixo Y\n");
    }

    return 0;
}