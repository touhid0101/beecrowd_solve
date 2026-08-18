// 1541 - Building Houses - Beecrowd
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    while (true) {
        // declaring variables and taking input
        int length, width, buildable_area_percentage, house_area, total_area, land_size;
        scanf("%d", &width);
        if (width == 0) {
            break;
        }
        scanf("%d %d", &length, &buildable_area_percentage);

        // main logic
        house_area = width * length;
        total_area = house_area / (buildable_area_percentage / 100.0);
        land_size = sqrt(total_area);

        // printing the output
        printf("%d\n", land_size);
    }
    return 0;
}
