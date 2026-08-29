// 1848 - Counting crow - Beecrowd
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    // scream_counter holds total numbers of screams
    int scream_counter, result = 0;

    for (scream_counter = 0; scream_counter < 3;) {
        // reading input line
        char crow_reaction[10];
        scanf(" %[^\n]", crow_reaction);

        // main logic
        if (strcmp(crow_reaction, "caw caw") == 0) {
            scream_counter++;
            printf("%d\n", result);
            result = 0;

        } else {
            int eye_digit;
            for (int i = 0; i < 3; i++) {
                if (crow_reaction[i] == '*') {
                    eye_digit = 1;
                } else {
                    eye_digit = 0;
                }
                result += eye_digit * pow(2, 2 - i);
            }
        }
    }

    return 0;
}