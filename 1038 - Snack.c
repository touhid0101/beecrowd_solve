// 1038 - Snacks | Beecrowd
#include <stdio.h>

int main() {
    // defining an array containing all products price
    double products[] = {4, 4.5, 5, 2, 1.5};

    // taking products code and quantity as input
    int product_code, product_quantity;
    scanf("%d %d", &product_code, &product_quantity);

    // decrementing product code to match with array index
    product_code--;

    // calculating total payment to be made
    double total_payment = products[product_code] * product_quantity;

    // printing the output
    printf("Total: R$ %.2lf\n", total_payment);

    return 0;
}