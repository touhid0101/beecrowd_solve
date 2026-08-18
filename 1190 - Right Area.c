// 1190 - Right Area - Beecrowd
#include <stdio.h>

int main() {
    // declaring variable and taking inputs
    double sum = 0, average;
    char operation;
    double M[12][12];
    scanf("%c", &operation);

    // main logic
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            // taking inputs
            scanf("%lf", &M[i][j]);
            // finding elements of right area
            if (j > i && i + j > 11) {
                sum += M[i][j];
            }
        }
    }

    // printing final output
    if (operation == 'M') {
        average = sum / 30.0;
        printf("%.1lf\n", average);
    } else if (operation == 'S') {
        printf("%.1lf\n", sum);
    }

    return 0;
}