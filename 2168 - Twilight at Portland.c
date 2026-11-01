// 2168 - Twilight at Portland - Beecrowd
#include <stdio.h>

int main() {
    // N+1 >>> total rows/columns of street lamps
    int N;
    scanf("%d", &N);

    // reading the light status of each block
    int blocks[N + 1][N + 1];
    for (int i = 0; i <= N; i++) {
        for (int k = 0; k <= N; k++) {
            scanf("%d", &blocks[i][k]);
        }
    }

    // determining if a block is safe or not
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) { // clang-format off
            if (blocks[i][k] + blocks[i][k + 1] + blocks[i + 1][k] +
                blocks[i + 1][k + 1] >= 2) { // clang-format on
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }

    return 0;
}