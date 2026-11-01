// 2163 - The Force Awakens - Beecrowd
#include <stdio.h>

int main() {
    // reading number of rows/cols
    int row, col;
    scanf("%d %d", &row, &col);

    // reading the matrix
    int matrix[row][col];
    for (int i = 0; i < row; i++) {
        for (int k = 0; k < col; k++) {
            scanf("%d", &matrix[i][k]);
        }
    }

    // finding the lightsaber
    int lightsaber_found = 0;
    for (int i = 1; i < row - 1; i++) {
        for (int k = 1; k < col - 1; k++) {
            if (matrix[i][k] == 42) { // clang-format off
                if (matrix[i - 1][k - 1] == 7 &&
                    matrix[i - 1][k] == 7 &&
                    matrix[i - 1][k + 1] == 7 &&
                    matrix[i][k - 1] == 7 &&
                    matrix[i][k + 1] == 7 &&
                    matrix[i + 1][k - 1] == 7 &&
                    matrix[i + 1][k] == 7 &&
                    matrix[i + 1][k + 1] == 7) { // clang-format on

                    printf("%d %d\n", i + 1, k + 1);
                    lightsaber_found = 1;
                }
            }
        }
    }

    if (lightsaber_found == 0) {
        printf("0 0\n");
    }

    return 0;
}