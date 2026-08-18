// 1009 - Salary with Bonus - Beecrowd
#include <stdio.h>

int main() {
    // taking seller's salary and price of total sold products as input
    double sold_value, base_salary;
    scanf(" %*s %lf %lf", &base_salary, &sold_value);

    // calculating the final salary after adjusting comissions
    double final_salary = base_salary + sold_value * 0.15;

    // printing the output
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}