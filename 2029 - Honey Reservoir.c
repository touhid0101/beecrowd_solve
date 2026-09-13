// 2029 - Honey Reservoir - Beecrowd
#include <stdio.h>
#define PI 3.14

int main() {
    // reading volume and diameter of the jar
    double volume, diameter;
    while (scanf("%lf %lf", &volume, &diameter) != EOF) {
        // calculating the height and lid area of the jar
        double height = volume / ((PI * (diameter * diameter) / 4));
        double area = PI * (diameter * diameter) / 4;
        // printing the output
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", height, area);
    }

    return 0;
}