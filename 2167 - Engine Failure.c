// 2167 - Engine Failure - Beecrowd
#include <stdio.h>

int main() {
    // reading the total number of measurements
    int N;
    scanf("%d", &N);

    // detects if engine speed falls or not
    int fall_happen = 0;
    int previous, current;
    scanf("%d", &previous);

    // reading engine measurements
    for (int i = 2; i <= N; i++) {
        scanf("%d", &current);

        // detecting falls
        if (current < previous) {
            printf("%d\n", i);
            fall_happen = 1;
            break;
        }

        previous = current;
    }

    // if no fall happens
    if (fall_happen == 0) {
        printf("0\n");
    }

    return 0;
}