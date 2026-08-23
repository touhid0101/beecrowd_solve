// 1046 - Game Time - Beecrowd
#include <stdio.h>

int main() {
    // taking initial and final Hour as input
    int initial_hour, final_hour;
    scanf("%d %d", &initial_hour, &final_hour);

    // calculating duration
    int duration;
    if (initial_hour > final_hour || initial_hour == final_hour) {
        duration = final_hour - initial_hour + 24; // the next day
    } else {
        duration = final_hour - initial_hour;
    }

    // printing the output
    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}