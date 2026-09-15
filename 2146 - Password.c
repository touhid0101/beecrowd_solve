// 2146 - Password - Beecrowd
#include <stdio.h>

int main() {
    // reading the number written on paper
    int number;
    while (scanf("%d", &number) != EOF) {
        printf("%d\n", number - 1);
    }

    return 0;
}