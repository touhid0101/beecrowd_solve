// 2139 - Pedrinho's Christmas - Beecrowd
#include <stdio.h>

int main() {
    // defining array containing days of 12 months
    int days[11] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    // total days from jan 1 to dec 25
    const int chistmas_days = 359;
    // reading the month and day
    int month, day;
    while (scanf("%d %d", &month, &day) != EOF) {
        // checking if it's christmas eve or day
        if ((month == 12) && (day == 25)) {
            printf("E natal!\n");
        } else if ((month == 12) && (day == 24)) {
            printf("E vespera de natal!\n");
        } else if ((month == 12) && (day > 25)) {
            printf("Ja passou!\n");
        } else {
            // total days from jan 1 to current date
            int current_days = day;
            for (int i = 0; i < month - 1; i++) {
                current_days += days[i];
            }
            int days_until_chistmas = chistmas_days - current_days + 1;

            // printing the result
            printf("Faltam %d dias para o natal!\n", days_until_chistmas);
        }
    }

    return 0;
}