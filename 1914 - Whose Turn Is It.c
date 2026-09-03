// 1914 - Whose Turn Is It? - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // taking test cases as input
    int test_cases;
    scanf("%d", &test_cases);

    // running each test case
    for (int i = 0; i < test_cases; i++) {
        // reading player name, even/odd, number choice
        char player1[101], player2[101], choice1[10], choice2[10];
        long num1, num2;
        scanf("%s %s %s %s %d %d", &player1, &choice1, &player2, &choice2, &num1, &num2);

        // finding PAR or IMPAR is the victory result
        char victory_choice[10];
        if ((num1 + num2) % 2 == 0) {
            strcpy(victory_choice, "PAR");
        } else {
            strcpy(victory_choice, "IMPAR");
        }

        // finding the winner
        if (strcmp(victory_choice, choice1) == 0) {
            printf("%s\n", player1);
        } else {
            printf("%s\n", player2);
        }
    }

    return 0;
}