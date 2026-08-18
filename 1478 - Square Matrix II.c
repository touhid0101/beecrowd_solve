// 1435 - Square Matrix I - Beecrowd
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    while (true) {
        // declaring variables and taking inputs
        int matrix_size;
        scanf("%d", &matrix_size);
        // terminating the program
        if (matrix_size == 0) {
            break;
        }

        int matrix[matrix_size][matrix_size], max_index = matrix_size - 1;

        // filling the matrix
        for (int m = 0; m < matrix_size; m++) {
            for (int n = 0; n < matrix_size; n++) {
                matrix[m][n] = abs(m - n) + 1;
            }
        }

        // reading and printing the matrix
        for (int m = 0; m < matrix_size; m++) {
            for (int n = 0; n < matrix_size; n++) {
                if (n == 0) {
                    printf("%3d", matrix[m][n]);
                } else {
                    printf(" %3d", matrix[m][n]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}