// 2061 - Closing Tabs - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading the initial number of tabs and actions
    int opened_tabs, actions;
    scanf("%d %d", &opened_tabs, &actions);

    // reading each actions
    char temp[10];
    for (int i = 0; i < actions; i++) {
        scanf("%s", &temp);
        // tab behavior
        if (opened_tabs != 0) {
            if (strcmp(temp, "fechou") == 0) {
                opened_tabs++;
            } else if (strcmp(temp, "clicou") == 0) {
                opened_tabs--;
            }
        }
    }
    // printing the output
    printf("%d\n", opened_tabs);

    return 0;
}