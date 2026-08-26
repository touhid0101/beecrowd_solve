// 1044 - Multiples - Beecrowd
#include <stdio.h>

int main() {
    // taking 2 numbers as input
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // swapping num1, num2 such that num2 is the largest
    int temp; // clang-format off
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    // clang-format on

    // checking if multiple or not
    if (num2 % num1 == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
