// 1959 - Regular Simple Polygons - Beecrowd
#include <stdio.h>

int main() {
    // reading total_sides and length of polygon
    unsigned long total_sides, length;
    while (scanf("%lu %lu", &total_sides, &length) != EOF) {
        // calculating and printing perimeter
        printf("%lu\n", total_sides * length);
    }

    return 0;
}