// 1018 - Banknotes - Beecrowd
#include <stdio.h>

int main() {
    // declaring an array with all possible banknotes
    int available_notes[] = {100, 50, 20, 10, 5, 2, 1};

    // reading total cash to be decomposed
    int initial_cash;
    scanf("%d", &initial_cash);

    // printing the amount of cash to be decomposed
    printf("%d\n", initial_cash);

    // decomposing initial cash to banknotes
    for (int current_cash = initial_cash, i = 0; i < 7; i++) { // i iterates over the 7 Banknotes
        // working with ith note in available_notes[] array
        int current_note = available_notes[i];

        // calculating how many notes needed to decompose current_cash
        int decomposed_notes_number = current_cash / current_note;

        // calculating leftover cash after decomposing
        current_cash %= current_note;

        // printing the current decomposing note and how many notes it takes
        printf("%d nota(s) de R$ %d,00\n", decomposed_notes_number, current_note);
    }
    return 0;
}
