// 1061 - Event Time - Beecrowd
#include <stdio.h>

int main() {
    // taking initial and final timestamps as input
    int initial_day, initial_H, initial_M, initial_S;
    scanf("%*s %d %d %*s %d %*s %d", &initial_day, &initial_H, &initial_M, &initial_S);
    int final_day, final_H, final_M, final_S;
    scanf("%*s %d %d %*s %d %*s %d", &final_day, &final_H, &final_M, &final_S);

    // calculating initial and final time in seconds
    int initial_time = initial_day * 24 * 3600 + initial_H * 3600 + initial_M * 60 + initial_S;
    int final_time = final_day * 24 * 3600 + final_H * 3600 + final_M * 60 + final_S;

    // calculating total duration in seconds
    int total_duration = final_time - initial_time;

    // converting total duration to Day, Hour, Minute and Second
    int duration_day = total_duration / 86400, // clang-format off
        duration_H = (total_duration % 86400) / 3600,
        duration_M = ((total_duration % 86400) % 3600) / 60,
        duration_S = ((total_duration % 86400) % 3600) % 60; // seconds >>> remainder after minute calculation
    // clang-format on

    // printing the output
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", duration_day, duration_H,
           duration_M, duration_S);

    return 0;
}