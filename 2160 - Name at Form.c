// 2160 - Name at Form - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading the text
    char text[501];
    scanf("%[^\n]", &text);

    // printing the output
    if (strlen(text) > 80) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}