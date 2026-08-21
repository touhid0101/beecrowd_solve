// 1059 - Even Numbers | Beecrowd
#include <stdio.h>

int main() {
    // iterating the loop from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // checking if i is even
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
