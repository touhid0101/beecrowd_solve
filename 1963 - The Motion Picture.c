// 1963 - Motion Picture - Beecrowd
#include <stdio.h>

int main() {
    // reading old and new ticket price
    double old_price, new_price;
    scanf("%lf %lf", &old_price, &new_price);

    // calculating the price in crease in percentage
    double price_increase = ((new_price - old_price) / old_price) * 100;

    // printing the output
    printf("%.2lf%%\n", price_increase);

    return 0;
}