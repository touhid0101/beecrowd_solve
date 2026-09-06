// 1961 - Jumping Frog - Beecrowd
#include <stdio.h>
#include <stdlib.h>

int main() {
    // reading frog jump height and number of pipes
    int jump_height, total_pipes;

    while (scanf("%d %d", &jump_height, &total_pipes) != EOF) {

        // reading the height of the pipes
        int pipes_list[total_pipes];
        for (int i = 0; i < total_pipes; i++) {
            scanf("%d", &pipes_list[i]);
        }

        // verifying the game result
        int game_result;
        for (int i = 0; i < total_pipes - 1; i++) {
            if (abs(pipes_list[i] - pipes_list[i + 1]) > jump_height) {
                game_result = 0;
                break;
            } else {
                game_result = 1;
            }
        }

        // printing the result
        if (game_result == 1) {
            printf("YOU WIN\n");
        } else if (game_result == 0) {
            printf("GAME OVER\n");
        }
    }

    return 0;
}