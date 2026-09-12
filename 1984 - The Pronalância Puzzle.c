// 1984 - The Pronalância Puzzle - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading the number
    char number[11];
    while (scanf("%s", number) != EOF) {
        // finding the length of the number
        int length = strlen(number);
        for (int i = 0; i < length; i++) {
            printf("%c", number[length - 1 - i]);
        }
        printf("\n");
    }

    return 0;
}