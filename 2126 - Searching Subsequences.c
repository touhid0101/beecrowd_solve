// 2126 - Searching Subsequences - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    int test_case = 1;
    // reading the target number
    char target_num[11];
    while (scanf("%10s", &target_num) != EOF) {
        // reading the dataset
        char dataset[34];
        scanf("%33s", &dataset);

        // finding the length of target number and dataset
        int len_target = strlen(target_num);
        int len_dataset = strlen(dataset);

        // running the search
        int last_position, total_match = 0;
        for (int i = 0; i < len_dataset; i++) {
            if (strncmp(target_num, &dataset[i], len_target) == 0) {
                total_match++;
                last_position = i + 1;
            }
        }

        // clang-format off

        // printing the result
        if (total_match != 0) {
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",
             test_case, total_match, last_position);
        } else {
            printf("Caso #%d:\nNao existe subsequencia\n\n", test_case);
        }
        test_case++;
    }

    return 0;
}