// 2140 - Two Bills - Beecrowd
#include <stdio.h>

int main() {
    // listing all available bills
    int bills[] = {2, 5, 10, 20, 50, 100};
    int purchase, received;

    do {
        // reading the purchase amount and received cash
        scanf("%d %d", &purchase, &received);

        // calculating the change
        int change = received - purchase;

        // checking if it's possible to provide change with just 2 bills
        int total_bills = (sizeof(bills) / sizeof(bills[0]));
        int possible = 0;

        int should_break = 0;
        for (int i = 0; i < total_bills; i++) {
            for (int j = 0; j < total_bills; j++) {
                if (bills[i] + bills[j] == change) {
                    should_break = 1;
                    possible = 1;
                }
            }

            // breaking the loop
            if (should_break == 1) {
                break;
            }
        }

        // printing the output
        if (possible == 1) {
            printf("possible\n");
        } else if (purchase != 0 && received != 0) {
            printf("impossible\n");
        }

    } while ((purchase != 0) && (received != 0));

    return 0;
}