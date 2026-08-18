// 1557 - Square Matrix III - Beecrowd
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

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
                matrix[m][n] = pow(2, (m + n));
            }
        }

        // finding the total digits of the maximum number
        int max_digits = 0, quotient = matrix[max_index][max_index];
        do {
            quotient = quotient / 10;
            max_digits++;
        } while (quotient > 0);

        // reading and printing the matrix
        for (int m = 0; m < matrix_size; m++) {
            for (int n = 0; n < matrix_size; n++) {
                if (n == 0) {
                    printf("%*d", max_digits, matrix[m][n]);
                } else {
                    printf(" %*d", max_digits, matrix[m][n]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}