// 1185 - Above the Secundary Diagonal - BEECROWD
#include <stdio.h>

int main() {
    double M[12][12], sum = 0, average;
    char operation;
    scanf("%c", &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 10 - i; j >= 0; j--) {
            sum += M[i][j];
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