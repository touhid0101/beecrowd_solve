// 1060 - Positive Numbers | Beecrowd
#include <stdio.h>

int main() {
    // declaring an array of size of 6 and a variable to store number of positives
    double numbers[6];
    int total_positives = 0;

    // looping through user input and array to count positive numbers
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &numbers[i]);
        // checking if ith number is positive or not
        if (numbers[i] > 0) {
            total_positives++;
        }
    }

    // printing the output
    printf("%d valores positivos\n", total_positives);

    return 0;
}
