// 1184 - Below the Main Diagonal - BEECROWD
#include <stdio.h>

int main() {
    double M[12][12], sum = 0, average;
    char operation;
    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int k = 0; k < 12; k++) {
            scanf("%lf", &M[i][k]);
        }
    }

    for (int i = 1; i <= 11; i++) {
        for (int k = 0; k < i; k++) {
            sum += M[i][k];
        }
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else if (operation == 'M') {
        average = sum / 66.0;
        printf("%.1lf\n", average);
    }

    return 0;
}