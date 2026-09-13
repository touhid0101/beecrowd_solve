// 2031 - Rock, Paper, Airstrike - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading number of test cases
    int test_cases;
    scanf("%d", &test_cases);

    // running each test cases
    for (int i = 0; i < test_cases; i++) {
        // reading player1, player2 moves
        char move1[10], move2[10];
        scanf("%s %s", &move1, &move2);

        // game logic
        if (strcmp(move1, move2) == 0) {
            if (strcmp(move1, "ataque") == 0) {
                printf("Aniquilacao mutua\n");
            } else if (strcmp(move1, "pedra") == 0) {
                printf("Sem ganhador\n");
            } else {
                printf("Ambos venceram\n");
            }
        } else if (strcmp(move1, "ataque") == 0 // clang-format off
               || (strcmp(move1, "pedra") == 0 
                && strcmp(move2, "papel") == 0)) {
            printf("Jogador 1 venceu\n");
        } else {
            printf("Jogador 2 venceu\n");
        }
    }

    return 0;
}