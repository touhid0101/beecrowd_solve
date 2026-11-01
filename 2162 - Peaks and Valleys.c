// 2162 - Peaks and Valleys - Beecrowd
#include <stdbool.h>
#include <stdio.h>

int main() {
    // reading number of landscape
    int total_landscapes;
    scanf("%d", &total_landscapes);

    // reading the landscapes height
    int landscapes[total_landscapes];
    for (int i = 0; i < total_landscapes; i++) {
        scanf("%d", &landscapes[i]);
    }

    // determining if current_(2nd) landscape is peak or valley
    bool peak = false, valley = false;
    if (landscapes[0] < landscapes[1]) {
        peak = true;
    } else if (landscapes[0] > landscapes[1]) {
        valley = true;
    }

    // verifying if landscapes follow Nlogony pattern
    bool nlogony_pattern = true; // assuming follows

    for (int i = 1; i < total_landscapes - 1; i++) {
        if (valley == true && landscapes[i] < landscapes[i + 1]) {
            peak = true;
            valley = false;
        } else {
            nlogony_pattern = false;
            break;
        }

        if (peak == true && landscapes[i] > landscapes[i + 1]) {
            valley = true;
            peak = false;
        } else {
            nlogony_pattern = false;
            break;
        }
    }

    // printing the result
    if (nlogony_pattern == true) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}