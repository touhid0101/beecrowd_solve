// 1035 - Selection Test | BeeCrowd
#include <stdio.h>

int main() {
    // taking 4 integers as input
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // main logic
    if ((B > C) // clang-format off
        && (D > A)
        && ((C + D) > (A + B))
        && (C > 0)
        && (D > 0)
        && (A % 2 == 0)) { // clang-format on
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
