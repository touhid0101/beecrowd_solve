// 2176 - Parity - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // reading the binary message
    char message[102];
    scanf("%s", &message);

    // getting the length
    int len = strlen(message);

    // finding total bits of 1
    int total_1s = 0;
    for (int i = 0; i < len; i++) {
        if (message[i] == '1') {
            total_1s++;
        }
    }

    // manipulating the message
    if (total_1s % 2 == 0) {
        message[len] = '0';
    } else {
        message[len] = '1';
    }
    message[len + 1] = '\0';

    // printing the result
    printf("%s\n", message);

    return 0;
}