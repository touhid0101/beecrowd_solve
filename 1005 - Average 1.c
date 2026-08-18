// 1005 - Average 1 - Beecrowd
#include <stdio.h>

int main() {
    // taking grades as input
    double grade1, grade2;
    scanf("%lf %lf", &grade1, &grade2);

    // calculating the weighted grades
    double grade1_weighted = grade1 * 3.5;
    double grade2_weighted = grade2 * 7.5;

    // calculating the weighted average
    double weighted_average = (grade1_weighted + grade2_weighted) / 11;

    // printing the output with 5 decimal places precision
    printf("MEDIA = %.5lf\n", weighted_average);

    return 0;
}