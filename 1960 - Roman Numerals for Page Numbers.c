// 1960 - Roman Numerals for Page Numbers - Beecrowd
#include <stdio.h>

int main() {
    // defining custom datatype for decimal to roman numeral conversion
    struct table {
        char numeral[5];
        int value;
    };

    struct table roman_table[21] = {
        {"I", 1},    {"II", 2},    {"III", 3},   {"IV", 4},   {"V", 5},   {"IX", 9},
        {"X", 10},   {"XX", 20},   {"XXX", 30},  {"XL", 40},  {"L", 50},  {"XC", 90},
        {"C", 100},  {"CC", 200},  {"CCC", 300}, {"CD", 400}, {"D", 500}, {"CM", 900},
        {"M", 1000}, {"MM", 2000}, {"MMM", 3000}};

    // reading decimal number
    int decimal;
    while (scanf("%d", &decimal) != EOF) {
        int current_number = decimal;
        for (int i = 0; i < 21; i++) {
            if (current_number >= roman_table[20 - i].value) {
                current_number %= roman_table[20 - i].value;
                printf("%s", roman_table[20 - i].numeral);
            }
        }
        printf("\n");
    }

    return 0;
}