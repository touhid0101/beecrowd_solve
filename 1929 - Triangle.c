// 1929 - Triangle - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    // taking length of 4 rods as input
    int rod[4];
    scanf("%d %d %d %d", &rod[0], &rod[1], &rod[2], &rod[3]);

    // sorting the rods in chronological order
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (rod[j] > rod[j + 1]) {
                int temp = rod[j];
                rod[j] = rod[j + 1];
                rod[j + 1] = temp;
            }
        }
    }

    // checking if triangle is formable or not
    int formable;
    for (int i = 0; i < 2; i++) {
        if (rod[i] + rod[i + 1] > rod[i + 2]) {
            printf("S\n");
            formable = 1;
            break;
        } else {
            formable = 0;
        }
    }
    if (formable == 0) {
        printf("N\n");
    }

    return 0;
}