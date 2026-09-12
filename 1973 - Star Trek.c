// 1973 - Star Trek - Beecrowd
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    // reading total stars (farms)
    int total_stars;
    scanf("%d", &total_stars);

    // reading total sheeps of each star (farm)
    int sheeps[total_stars];
    for (int i = 0; i < total_stars; i++) {
        scanf("%d", &sheeps[i]);
    }

    /*
    main logic
    setting all values of attacked stars array to 0
    */
    int attacking_star = 0, attacked_stars[total_stars];
    memset(attacked_stars, 0, sizeof(attacked_stars));

    while (true) {
        // exit condition
        if (attacking_star < 0 || attacking_star > (total_stars - 1)) {
            break;
        }
        // attacking and moving logic
        int attacking_star_prev = attacking_star;
        if (sheeps[attacking_star] % 2 == 0) {
            attacking_star--;
        } else {
            attacking_star++;
        }
        if (sheeps[attacking_star_prev] != 0) {
            sheeps[attacking_star_prev]--;
        } else {
            attacking_star--;
        }
        // marking the star that is attacked
        attacked_stars[attacking_star_prev] = 1;
    }

    // calculating leftover sheeps
    long long leftover_sheeps = 0;
    for (int i = 0; i < total_stars; i++) {
        leftover_sheeps += sheeps[i];
    }

    // finding the number of stars that were attacked
    int total_attacked_stars = 0;
    for (int i = 0; i < total_stars; i++) {
        if (attacked_stars[i] == 1) {
            total_attacked_stars++;
        }
    }

    // printing the output
    printf("%d %lld\n", total_attacked_stars, leftover_sheeps);

    return 0;
}