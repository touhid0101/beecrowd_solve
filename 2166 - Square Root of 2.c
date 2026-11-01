// 2166 - Square Root of 2 - Beecrowd
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sqrt2 = 1;
    double fraction = 0;
    for (int i = 0; i < n; i++) {
        fraction = 1.0 / (fraction + 2.0);
    }

    sqrt2 += fraction;

    printf("%.10lf\n", sqrt2);

    return 0;
}