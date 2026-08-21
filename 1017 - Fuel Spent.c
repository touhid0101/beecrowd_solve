// 1017 - Fuel Spend - Beecrowd
#include <stdio.h>

int main() {
    // taking time and speed as input
    int time, average_speed;
    scanf("%d %d", &time, &average_speed);

    // calculating required fuel, dividing by 12Km/L
    double required_fuel = (time * average_speed) / 12.00;

    // printing the output
    printf("%.3lf\n", required_fuel);

    return 0;
}