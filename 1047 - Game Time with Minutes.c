// 1047 - Game Time with Minutes - Beecrowd
#include <stdio.h>

int main() {
    // taking initial/final Hour/Minutes as input
    int initial_hour, initial_minute, final_hour, final_minute;
    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    // calculating initial and final time in minutes
    int initial_time = initial_hour * 60 + initial_minute;
    int final_time = final_hour * 60 + final_minute;

    // calculating total duration in minutes
    int total_duration = final_time - initial_time;

    // total_duration <= 0 means final time falls in next day
    if (total_duration <= 0) {
        total_duration += 1440;
    }

    // convering total_duration from minutes to Hour/Minute
    int duration_hour = total_duration / 60;
    int duration_minute = total_duration % 60;

    // printing the output
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_minute);

    return 0;
}
