// 1007 - Difference - Beecrowd
#include <stdio.h>

int main() {
    // taking 4 numbers as input
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // calculating the difference between A*B, C*D
    int difference = num1 * num2 - num3 * num4;

    // printing the output
    printf("DIFERENCA = %d\n", difference);

    return 0;
}