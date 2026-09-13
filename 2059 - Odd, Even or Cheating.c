// 2059 - Odd, Even or Cheating - Beecrowd
#include <stdio.h>

int main() {
    // reading both player's choices
    int choice1, num1, num2, cheated, accused;
    scanf("%d %d %d %d %d", &choice1, &num1, &num2, &cheated, &accused);

    // game logic
    int sum = num1 + num2;
    int is_even = (sum % 2 == 0);

    if (cheated == 1 && accused == 1) {
        printf("Jogador 2 ganha!\n");
    } else if ((cheated == 1 && accused == 0) || // clang-format off
               (cheated == 0 && accused == 1)) {
        printf("Jogador 1 ganha!\n");
    } else if ((choice1 == 1 && is_even) ||
               (choice1 == 0 && !is_even)) {
        printf("Jogador 1 ganha!\n");
    } else {
        printf("Jogador 2 ganha!\n");
    }

    return 0;
}