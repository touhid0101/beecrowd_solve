// 1186 - Below the Secundary Diagonal - Beecrowd
#include <stdio.h>

int main() {
    // declaring variable and taking inputs
    double sum = 0, average;
    char operation;
    double M[12][12];
    scanf("%c", &operation);

    // taking inputs for the matrix M[12][12]
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // calculating sum of elements below secondary diagonal
    for (int i = 1; i < 12; i++) {
        for (int j = 11; j > 11 - i; j--) {
            sum += M[i][j];
        }
    }

    // printing final output
    if (operation == 'M') {
        average = sum / 66.0;
        printf("%.1lf\n", average);
    } else if (operation == 'S') {
        printf("%.1lf\n", sum);
    }

    return 0;
}