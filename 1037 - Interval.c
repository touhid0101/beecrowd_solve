// 1037 - Interval | BeeCrowd
#include <stdio.h>

int main() {
    // taking a number as input
    double input;
    scanf("%lf", &input);

    // main logic
    if (0 <= input && input <= 25) {
        printf("Intervalo [0,25]\n");

    } else if (25 < input && input <= 50) {
        printf("Intervalo (25,50]\n");

    } else if (50 < input && input <= 75) {
        printf("Intervalo (50,75]\n");

    } else if (75 < input && input <= 100) {
        printf("Intervalo (75,100]\n");

    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}
