// 1930 - Electrical Outlet - Beecrowd
#include <stdio.h>

int main() {
    // reading the number of sockets of 4 power strips
    int strip1, strip2, strip3, strip4;
    scanf("%d %d %d %d", &strip1, &strip2, &strip3, &strip4);

    // printing maximum number devices can be connected
    printf("%d\n", (strip1 + strip2 + strip3 + strip4 - 3));

    return 0;
}