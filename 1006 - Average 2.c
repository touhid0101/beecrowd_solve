// 1006 - Average 2 - Beecrowd
#include <stdio.h>

int main() {
    // taking grades as input
    double gradeA, gradeB, gradeC;
    scanf("%lf %lf %lf", &gradeA, &gradeB, &gradeC);

    // calculating the weighted grades
    double weighted_gradeA = gradeA * 2;
    double weighted_gradeB = gradeB * 3;
    double weighted_gradeC = gradeC * 5;

    // calculating the weighted average
    double weighted_average = (weighted_gradeA + weighted_gradeB + weighted_gradeC) / 10.0;

    // printing the output with 1 decimal places precision
    printf("MEDIA = %.1lf\n", weighted_average);

    return 0;
}