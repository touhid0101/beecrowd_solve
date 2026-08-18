// 1010 - Simple Calculate - Beecrowd
#include <stdio.h>

int main() {
    // reading product code, units, price
    int product1_code, product2_code, product1_units, product2_units;
    double product1_price, product2_price;
    scanf("%d %d %lf", &product1_code, &product1_units, &product1_price);
    scanf("%d %d %lf", &product2_code, &product2_units, &product2_price);

    // calculating the total amount to pay
    double product1_cost = product1_units * product1_price;
    double product2_cost = product2_units * product2_price;
    double payable_amount = product1_cost + product2_cost;

    // printing the output
    printf("VALOR A PAGAR: R$ %.2lf\n", payable_amount);

    return 0;
}