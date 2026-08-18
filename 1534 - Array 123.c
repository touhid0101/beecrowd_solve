// 1534 - Array 123 - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    while (true) {
        // declaring variables and taking inputs
        int matrix_size;
        if (scanf("%d", &matrix_size) == EOF) {
            break; // terminating program when EOF has been reached
        }
        int matrix[matrix_size][matrix_size];

        // filling the array and printing
        for (int i = 0; i < matrix_size; i++) {
            for (int j = 0; j < matrix_size; j++) {
                if (i + j + 1 == matrix_size) {
                    matrix[i][j] = 2;
                } else if (i == j) {
                    matrix[i][j] = 1;
                } else {
                    matrix[i][j] = 3;
                }

                printf("%d", matrix[i][j]);
                if (j + 1 == matrix_size) {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}