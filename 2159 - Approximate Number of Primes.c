// 2159 - Approximate Number of Primes - Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    // reading the natural number n
    unsigned long n;

    while (scanf("%lu", &n) != EOF) {
        // finding min & max value
        double min = n / log(n);
        double max = min * 1.25506;

        // printing the result
        printf("%.1lf %.1lf\n", min, max);
    }

    return 0;
}