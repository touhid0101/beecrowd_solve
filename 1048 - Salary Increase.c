// 1048 - Salary Increase - Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    // taking salary as input
    double salary;
    scanf("%lf", &salary);

    // converting salary into cents and rounding to avoid floating point errors
    int salary_in_cents = round(salary * 100);

    // setting increment percentage based on conditions
    int increment_percentage;
    if (salary_in_cents <= 40000) {
        increment_percentage = 15;

    } else if (salary_in_cents > 40000 && salary_in_cents <= 80000) {
        increment_percentage = 12;

    } else if (salary_in_cents > 80000 && salary_in_cents <= 120000) {
        increment_percentage = 10;

    } else if (salary_in_cents > 120000 && salary_in_cents <= 200000) {
        increment_percentage = 7;

    } else if (salary_in_cents > 200000) {
        increment_percentage = 4;
    }

    // calculating new total increment and new salary
    double increment = (salary_in_cents * increment_percentage) / 10000;
    double new_salary = salary + increment;

    // printing the output
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", new_salary, increment,
           increment_percentage);

    return 0;
}
