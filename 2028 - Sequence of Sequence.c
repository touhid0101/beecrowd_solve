// 2028 - Sequence of Sequence - Beecrowd
#include <stdio.h>

int main() {
    // reading the number for sequence
    int N;
    int test_case = 1;
    while (scanf("%d", &N) != EOF) {
        // finding total numbers of the sequence
        int total_numbers = 1;
        for (int i = 1; i <= N; i++) {
            total_numbers += i;
        }
        if (total_numbers == 1) {
            printf("Caso %d: %d numero\n", test_case, total_numbers);
        } else {
            printf("Caso %d: %d numeros\n", test_case, total_numbers);
        }
        test_case++;

        // finding the sequence
        printf("0");
        for (int i = 0; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                printf(" %d", i);
            }
        }
        // printing blank line after each case
        printf("\n\n");
    }

    return 0;
}