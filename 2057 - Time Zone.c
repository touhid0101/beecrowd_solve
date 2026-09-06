// 2057 - Time Zone - Beecrowd
#include <stdio.h>

int main() {
    // reading departure time, travel time and time zone difference
    int dep_time, travel_time, time_zone_diff;
    while (scanf("%d %d %d", &dep_time, &travel_time, &time_zone_diff) != EOF) {

        int final_time = dep_time + travel_time + time_zone_diff;
        if (final_time == 24) {
            printf("0\n");
        } else if (final_time < 0) {
            printf("%d\n", final_time + 24);
        } else if (final_time > 24) {
            printf("%d\n", final_time - 24);
        } else {
            printf("%d\n", final_time);
        }
    }
}