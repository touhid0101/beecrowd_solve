// 2003 - Sunday Morning - Beecrowd
#include <stdio.h>

int main() {
    // reading the wake up time of Bino
    int wakeup_hour, wakeup_min;
    while (scanf("%d:%d", &wakeup_hour, &wakeup_min) != EOF) {
        // calculating the time when Bino woke up in minutes
        int wakeup_time = wakeup_hour * 60 + wakeup_min;

        // calculating maximum delay
        int max_delay = (wakeup_time + 60) - 480;
        if (max_delay < 0) {
            max_delay = 0;
        }

        // printing the output
        printf("Atraso maximo: %d\n", max_delay);
    }

    return 0;
}