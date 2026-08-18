// 1789 - The Race of Slugs - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    while (true) {
        int total_slugs, max_slug_speed, current_slug_speed;
        int EOF_CHECK = scanf("%d", &total_slugs);

        // terminating the program when End of File is reached
        if (EOF_CHECK == EOF) {
            break;
        }

        for (int i = 0; i < total_slugs; i++) {
            scanf("%d", &current_slug_speed);

            // initializing 1st slug speed as maximum
            if (i == 0) {
                max_slug_speed = current_slug_speed;
            }

            // checking if current slug speed is greater than maximum
            if (current_slug_speed > max_slug_speed) {
                max_slug_speed = current_slug_speed;
            }
        }
        // determining the level (speed) of maximum speed of the slug
        if (max_slug_speed >= 20) {
            printf("3\n");
        } else if (max_slug_speed >= 10) {
            printf("2\n");
        } else if (max_slug_speed < 10) {
            printf("1\n");
        }
    }

    return 0;
}