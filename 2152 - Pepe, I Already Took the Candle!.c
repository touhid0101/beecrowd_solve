// 2146 - Password - Beecrowd
#include <stdio.h>

int main() {
    // reading the number of test cases
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    for (int i = 0; i < test_cases; i++) {
        // reading Hour, Minute and door log
        int hour, minute, door;
        scanf("%d %d %d", &hour, &minute, &door);

        // printing the output
        if (door == 1) {
            printf("%02d:%02d - A porta abriu!\n", hour, minute);
        } else {
            printf("%02d:%02d - A porta fechou!\n", hour, minute);
        }
    }

    return 0;
}