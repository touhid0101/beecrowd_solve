// 2161 - Square Root of 10 - Beecrowd
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sqrt10 = 3;
    double fraction = 0;
    while (n--) {
        fraction = 1 / (fraction + 6);
    }

    sqrt10 += fraction;

    printf("%.10lf\n", sqrt10);

    return 0;
}