// 1962 - A Long, Long Time Ago - Beecrowd
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // reading the number of test cases
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    const int current_year = 2015;
    for (int i = 0; i < test_cases; i++) {
        // reading the passed years
        int passed_years;
        scanf("%d", &passed_years);

        // main logic
        char year_type[6];
        int event_year = current_year - passed_years;

        // calculating the year for B.C.
        if (event_year < 1) {
            event_year = abs(event_year) + 1;
            strcpy(year_type, "A.C.");
        } else {
            strcpy(year_type, "D.C.");
        }

        // printing the output
        printf("%d %s\n", event_year, year_type);
    }

    return 0;
}