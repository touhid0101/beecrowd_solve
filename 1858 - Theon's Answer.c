// 1858 - Theon's Answer - Beecrowd
#include <stdio.h>

int main() {
    // taking the number of possible torturers as input
    int possbile_torturers;

    while (scanf("%d", &possbile_torturers) != EOF) {
        // taking the list of possible torturers as input
        int torturers_list[possbile_torturers];
        for (int i = 0; i < possbile_torturers; i++) {
            scanf("%d", &torturers_list[i]);
        }

        // finding the torturer with lowest number
        int torturer_positon = 1, torturer_value = torturers_list[0];

        for (int i = 1; i < possbile_torturers; i++) {
            if (torturer_value > torturers_list[i]) {
                torturer_positon = i + 1;
                torturer_value = torturers_list[i];
            }
        }

        // printing the output
        printf("%d\n", torturer_positon);
    }

    return 0;
}