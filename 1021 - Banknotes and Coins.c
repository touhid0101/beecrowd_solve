// 1021 - Banknotes and Coins - Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    // declaring an array with all possible banknotes and coins, converted to cents
    int available_notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int available_coins[] = {100, 50, 25, 10, 5, 1};

    // taking the amount of cash to be decomposed as input
    double initial_decomposible_cash;
    scanf("%lf", &initial_decomposible_cash);

    // converting available cash into cents to avoid floating point numbers and rounding errors
    int available_decomposible_cash = initial_decomposible_cash * 100;

    // decomposing the cash into banknotes and printing
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        // working with ith banknote
        int current_note = available_notes[i];
        // calculating number of banknotes after decomposition
        int decomposed_notes_number = available_decomposible_cash / current_note;
        // calculating leftover cash
        available_decomposible_cash %= current_note;
        // printing number of notes
        printf("%d nota(s) de R$ %d.00\n", decomposed_notes_number, current_note / 100);
    }

    // decomposing the leftover cash into Coins and printing
    printf("MOEDAS:\n");
    for (int i = 0; i <= 5; i++) {
        // working with ith coin
        int current_coin = available_coins[i];
        // calculating the number of coins after decomposition
        int decomposed_coins_number = available_decomposible_cash / current_coin;
        // calculating the leftover cash
        available_decomposible_cash %= current_coin;
        // printing the number of coins
        printf("%d moeda(s) de R$ %.2lf\n", decomposed_coins_number, (double)(current_coin) / 100);
    }

    return 0;
}
