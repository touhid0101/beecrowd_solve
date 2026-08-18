// 1435 - Square Matrix I - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    while (true) {
        // declaring variable and taking inputs
        int matrix_size;
        scanf("%d", &matrix_size);
        if (matrix_size == 0) {
            break;
        }
        int matrix[matrix_size][matrix_size], max_index = matrix_size - 1;

        // filling the array (row = m, column = n)
        for (int m = 0; m < matrix_size; m++) {
            if (m > (matrix_size) / 2) {
                for (int n = matrix_size - m; n <= m; n++) {
                    matrix[m][n] = max_index - m + 1;
                }
                for (int i = 0; i <= max_index - m; i++) {
                    matrix[m][i] = i + 1;
                    matrix[m][max_index - i] = matrix[m][i];
                }
            } else {
                for (int n = m; n <= max_index - m; n++) {
                    matrix[m][n] = m + 1;
                }
                for (int i = 0; i <= m - 1; i++) {
                    matrix[m][i] = i + 1;
                    matrix[m][max_index - i] = matrix[m][i];
                }
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