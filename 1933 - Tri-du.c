// 1933 - Tri-du - Beecrowd
#include <stdio.h>

int main() {
    // reading the value of 2 cards
    int card1, card2;
    scanf("%d %d", &card1, &card2);

    // guessing the output
    if (card1 > card2) {
        printf("%d\n", card1);
    } else {
        printf("%d\n", card2);
    }

    return 0;
}