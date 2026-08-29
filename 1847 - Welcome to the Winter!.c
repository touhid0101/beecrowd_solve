// 1847 - Welcome to the Winter! - Beecrowd
#include <stdio.h>

int main() {
    // taking temp. of 3 consecutive days as input
    int temp1, temp2, temp3;

    while (scanf("%d %d %d", &temp1, &temp2, &temp3) != EOF) {
        // clang-format off
        // main logic
        if (temp2 < temp1 && temp2 <= temp3 ||
            temp2 > temp1 && (temp3 - temp2) >= (temp2 - temp1) ||
            temp2 < temp1 && (temp2 - temp3) < (temp1 - temp2) ||
            temp2 == temp1 && temp3 > temp2) {
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    }

    return 0;
}