// 2164 - Fast Fibonacci - Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double a = pow(((1 + sqrt(5)) / 2), n);
    double b = pow(((1 - sqrt(5)) / 2), n);

    double fib = (a - b) / sqrt(5);

    printf("%.1lf\n", fib);

    return 0;
}