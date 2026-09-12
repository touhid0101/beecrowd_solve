// 1958 - Scientific Notation - Beecrowd
#include <stdio.h>

int main() {
    // reading a floating point number
    double number;
    while (scanf("%lf", &number) != EOF) {
        // printing the output
        printf("%+.4E\n", number);
    }

    return 0;
}