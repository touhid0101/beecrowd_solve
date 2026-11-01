// 2147 - Galopeira - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading the number of test cases
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    for (int i = 0; i < test_cases; i++) {
        // reading the typed word
        char word[10001];
        scanf("%s", &word);

        // printing the output
        printf("%.2lf\n", strlen(word) / 100.0);
    }

    return 0;
}