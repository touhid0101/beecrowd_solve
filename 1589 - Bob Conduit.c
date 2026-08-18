// 1589 - Bob Conduit - Beecrowd
#include <stdio.h>

int main() {
    int test_cases, cable1_radius, cable2_radius, conduit_radius;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; i++) {
        scanf("%d %d", &cable1_radius, &cable2_radius);
        conduit_radius = cable1_radius + cable2_radius;
        printf("%d\n", conduit_radius);
    }

    return 0;
}