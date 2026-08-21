// 1019 - Time Conversion - Beecrowd
#include <stdio.h>

int main() {
    // taking time as input
    int given_time;
    scanf("%d", &given_time);

    // calculating Hours, Minutes and Seconds
    int hours = given_time / 3600;            // quotient as Hour
    int minutes = (given_time % 3600) / 60;   // quotient as minute
    int seconds = ((given_time % 3600) % 60); // remainder as second

    // printing the output
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}