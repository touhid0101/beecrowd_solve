// 2006 - Identifying Tea - Beecrowd
#include <stdio.h>

int main() {
    // reading tea type
    int correct_answer;
    scanf("%d", &correct_answer);

    // reading guesses
    int total_winners = 0, guesses[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &guesses[i]);

        if (guesses[i] == correct_answer) {
            total_winners++;
        }
    }

    // printing the output
    printf("%d\n", total_winners);

    return 0;
}