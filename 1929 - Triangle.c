// 1929 - Triangle - Beecrowd
#include <stdio.h>

int main() {
    // taking length of 4 rods as input
    int rod1, rod2, rod3, rod4;
    scanf("%d %d %d %d", &rod1, &rod2, &rod3, &rod4);

    if (rod1 + rod2 > rod3 || // clang-format off
        rod1 + rod2 > rod4 ||
        rod2 + rod3 > rod1 ||
        rod2 + rod3 > rod4) {
        printf("S\n");
    }

    return 0;
}