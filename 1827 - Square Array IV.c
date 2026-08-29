// 1827 - Square Array IV - Beecrowd
#include <stdio.h>

int main() {
    // taking the size of the matrix as input
    int matrix_size;

    while (scanf("%d", &matrix_size) != EOF) {
        // defining the matrix
        int matrix[matrix_size][matrix_size];

        // calculating the starting position of the element 1 and maximum index
        int position_of_1 = matrix_size / 3;
        int max_index = matrix_size - 1;

        // filling the matrix
        // looping through each row
        for (int i = 0; i < matrix_size; i++) {
            // looping through each column
            for (int j = 0; j < matrix_size; j++) {
                // filling the main diagonal
                if (i == j && (i < position_of_1 || i > max_index - position_of_1)) {
                    matrix[i][j] = 2;

                    // filling the secondary diagonal
                } else if (i + j == max_index &&
                           (i < position_of_1 || i > max_index - position_of_1)) {
                    matrix[i][j] = 3;

                    // filling the inside 1 loop
                } else if (i >= position_of_1 && i <= max_index - position_of_1 &&
                           j >= position_of_1 && j <= max_index - position_of_1) {
                    matrix[i][j] = 1;

                } else {
                    matrix[i][j] = 0;
                }

                // filling the center 4
                if (i == j && i + j == max_index) {
                    matrix[i][j] = 4;
                }
            }
        }

        // reading and printing the matrix
        for (int i = 0; i < matrix_size; i++) {
            for (int j = 0; j < matrix_size; j++) {
                printf("%d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}