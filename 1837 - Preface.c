// 1828 - Preface - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    // taking dividend and divisor as input
    int dividend, divisor;

    while (scanf("%d %d", &dividend, &divisor) != EOF) {
        // calculating quotient and remainder
        int quotient, remainder;

        // when dividend is > 0
        if (dividend > 0) {
            quotient = dividend / divisor;
            remainder = dividend % divisor;
        } else { // when dividend is < 0

            /* finding next divisible number
               calculating the quotient and remainder */
            for (int i = dividend; true; i--) {
                if (i % divisor == 0) {
                    quotient = i / divisor;
                    remainder = dividend - i;
                    break;
                }
            }
        }

        // printing the output
        printf("%d %d\n", quotient, remainder);
    }

    return 0;
}