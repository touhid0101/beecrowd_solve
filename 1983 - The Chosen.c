// 1983 - The chosen - Beecrowd
#include <stdio.h>

int main() {
    // reading the number of students
    int total_students;
    scanf("%d", &total_students);

    // reading their registration No. and Marks
    double academic_details[total_students][2];
    for (int i = 0; i < total_students; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &academic_details[i][j]);
        }
    }

    // selecting the student
    int highest_mark_holder = academic_details[0][0];
    double highest_mark = academic_details[0][1];

    for (int i = 0; i < total_students; i++) {
        if (academic_details[i][1] > highest_mark) {
            highest_mark = academic_details[i][1];
            highest_mark_holder = academic_details[i][0];
        }
    }

    // printing the result
    if (highest_mark >= 8) {
        printf("%d\n", highest_mark_holder);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}