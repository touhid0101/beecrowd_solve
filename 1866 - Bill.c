// 1866 - Bill - Beecrowd
#include <stdio.h>

int main() {
    // taking test cases as input
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    for (int i = 0; i < test_cases; i++) {
        // taking the number of terms as input
        int N;
        scanf("%d", &N);

        // calculating the sum
        if (N % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}