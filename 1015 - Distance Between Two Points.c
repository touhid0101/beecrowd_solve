// 1015 - Distance Between Two Points - Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    // taking two points as input
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // calculating distance
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // printing the output
    printf("%.4lf\n", distance);

    return 0;
}