// 1013 - The Greatest - Beecrowd
#include <stdio.h>
#include <stdlib.h>

int main() {
    // taking input 3 numbers
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    // larger holds the largest value between 'num1', 'num2'
    int larger = (num1 + num2 + abs(num1 - num2)) / 2;
    // 'largest' holds the largest value between 'larger', 'num3'
    int largest = (larger + num3 + abs(larger - num3)) / 2;

    printf("%d eh o maior\n", largest);

    return 0;
}