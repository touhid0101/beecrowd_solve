// 2165 - Twitting - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    char text[501];
    scanf("%[^\n]", &text);

    if (strlen(text) > 140) {
        printf("MUTE\n");
    } else {
        printf("TWEET\n");
    }

    return 0;
}