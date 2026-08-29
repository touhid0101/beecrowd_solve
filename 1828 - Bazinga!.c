// 1828 - Bazinga! - Beecrowd
#include <stdio.h>
#include <string.h>

int game_judge(int index, char win_conditions[5][2][10], char raj[], char sheldon[]) {
    // finding the winner
    for (int i = 0; i < 2; i++) {
        if (strcmp(win_conditions[index][i], sheldon) == 0) {
            return 0;
            break;
        } else if (strcmp(raj, sheldon) == 0) {
            return 2;
        }
    }
    return 1;
}

int main() {
    // clang-format off
    // defining a string aray for win conditions of rock, paper...etc.
    char win_conditions[5][2][10] = {// pedra (rock)
                                     {"tesoura", "lagarto"},
                                     // papel (paper)
                                     {"pedra", "Spock"},
                                     // tesoura (scissor)
                                     {"papel", "lagarto"},
                                     // lagarto (lizard)
                                     {"papel", "Spock"},
                                     // Spock (Spock)
                                     {"pedra", "tesoura"}
                                    };


    // defining a struct to map input with win conditions
    struct Map {
        const char *key;
        int index;
    };

    // mapping the input with win condition
    struct Map win_map[] = {
        {"pedra", 0},
        {"papel", 1},
        {"tesoura", 2},
        {"lagarto", 3},
        {"Spock", 4}
    };
    // clang-fromat on


    // taking total test cases as input
    int test_cases;
    scanf("%d", &test_cases);

    // running the test cases
    int test_case_count = 1;
    for (int i = 0; i < test_cases; i++) {

        // reading their game moves
        char move_raj[10], move_sheldon[10];
        scanf("%s %s", move_sheldon, move_raj);

        // matching input with wind_conditions index
        int index = -1;
        for (int j = 0; j < 5; j++) {
            if (strcmp(move_raj, win_map[j].key) == 0) {
                index = win_map[j].index;
                break;
            }
        }

        // calling game judge to verify the winner
        int winner = game_judge(index, win_conditions, move_raj, move_sheldon);

        // printign sheldon's reaction
        if (winner == 0) {
            printf("Caso #%d: Raj trapaceou!\n", test_case_count);
        } else if (winner == 1) {
            printf("Caso #%d: Bazinga!\n", test_case_count);
        } else if (winner == 2) {
            printf("Caso #%d: De novo!\n", test_case_count);
        }
        test_case_count++;
    }

    return 0;
}