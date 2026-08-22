// 1051 - Taxes - Beecrowd
#include <stdio.h>

int main() {
    // taking income as input
    double income;
    scanf("%lf", &income);

    // converting income to cents to avoid floating point rounding errors
    int income_in_cents = income * 100;

    // calculating due tax
    double due_tax;
    if (income_in_cents > 450000) { // clang-format off
        due_tax = ((income_in_cents - 450000) * 0.28
                + 150000 * 0.18
                + 100000 * 0.08) / 100;

    } else if (income_in_cents > 300000 && income_in_cents <= 450000) {
        due_tax = ((income_in_cents - 300000) * 0.18
                + 100000 * 0.08) / 100;

    } else if (income_in_cents > 200000 && income_in_cents <= 3000000) {
        due_tax = ((income_in_cents - 200000) * 0.08) / 100; // clang-format on
    }

    // printing the output
    if (income_in_cents <= 200000) {
        printf("Isento\n");
    } else {
        printf("R$ %.2lf\n", due_tax);
    }

    return 0;
}