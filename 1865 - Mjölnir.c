// 1865 - Mjölnir - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // taking test cases as input
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    for (int i = 0; i < test_cases; i++) {
        // taking names as input
        char person_name[20];
        scanf("%s %*d", &person_name);

        // checking if the person is worthy to lift the hammer
        if (strcmp(person_name, "Thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}