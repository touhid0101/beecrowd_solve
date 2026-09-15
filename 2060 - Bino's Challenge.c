// 2060 - Bino's Challenge - Beecrowd
#include <stdio.h>

int main() {
    // reading the number of integers
    int N;
    scanf("%d", &N);
    // reading the integers
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // listing the divisors
    int divisors[] = {2, 3, 4, 5};

    // finding the multiples
    for (int i = 0; i < (sizeof(divisors) / sizeof(divisors[0])); i++) {
        int total_multiples = 0;
        for (int k = 0; k < N; k++) {
            if (numbers[k] % divisors[i] == 0) {
                total_multiples++;
            }
        }
        printf("%d Multiplo(s) de %d\n", total_multiples, divisors[i]);
    }

    return 0;
}