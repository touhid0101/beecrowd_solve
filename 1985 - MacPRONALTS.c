// 1985 - MacPRONALTS - Beecrowd
#include <stdio.h>

int main() {
    // deifing the product-price chart
    // clang-format off
    double menu[5][2] = {{1001, 1.5},
                         {1002, 2.5},
                         {1003, 3.5},
                         {1004, 4.5},
                         {1005, 5.5}};
    // clang-format on

    // reading the number of purchased products
    int purchased_products;
    scanf("%d", &purchased_products);

    // reading the purchase description and calculating payable amount
    double payable_amount = 0;
    for (int i = 0; i < purchased_products; i++) {
        int ID, quantity;
        scanf("%d %d", &ID, &quantity);
        for (int i = 0; i < 5; i++) {
            if (ID == menu[i][0]) {
                payable_amount += (menu[i][1] * quantity);
                break;
            }
        }
    }

    printf("%.2lf\n", payable_amount);

    return 0;
}