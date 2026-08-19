// 1014 - Consumption - Beecrowd
#include <stdio.h>

int main() {
    // taking distance and fuel as input
    double distance, fuel;
    scanf("%lf %lf", &distance, &fuel);

    // calculating average consumption
    double average_consumption = distance / fuel;

    // printing the output with 3 decimal places precision
    printf("%.3lf km/l\n", average_consumption);

    return 0;
}