#include <stdio.h>

int main() {

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num3 > num1) {
            printf("%d eh o maior\n", num3);
            return 0;
        } else {
            printf("%d eh o maior\n", num1);
        }
    } else {
        if (num3 > num2) {
            printf("%d eh o maior\n", num3);
        } else {
            printf("%d eh o maior\n", num2);
        }
    }
}