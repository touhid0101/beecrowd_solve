// 1008 - Salary - Beecrowd
#include <stdio.h>

int main() {
    // taking Employee ID, Wage, Work hours as input
    int employee_ID, work_hours;
    double wage;
    scanf("%d %d %lf", &employee_ID, &work_hours, &wage);

    // calculating salary
    double salary = work_hours * wage;

    // printing the output
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employee_ID, salary);

    return 0;
}
