// 2143 - The Return of Radar - Beecrowd
#include <stdio.h>

int main() {
    // reading the number of test_cases
    int test_cases;

    while (scanf("%d", &test_cases) != EOF) {
        if (test_cases == 0) {
            break;
        }
        // running each test case
        for (int i = 0; i < test_cases; i++) {
            // reading the number of peoples
            int peoples;
            scanf("%d", &peoples);

            // calculating the total order
            int total_orders;
            if (peoples % 2 == 0) {
                total_orders = peoples * 2 - 2;
            } else {
                total_orders = peoples * 2 - 1;
            }

            // printing the total orders
            printf("%d\n", total_orders);
        }
    }

    return 0;
}