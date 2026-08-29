// 1864 - Our Days Are Never Coming Back - Beecrowd
#include <stdio.h>
#include <string.h>

int main() {
    // taking an integer as input
    int N;
    scanf("%d", &N);

    // defining the string array containing the quote
    char quote[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED"};

    // printing out the portion of quote
    for (int i = 0; i < N; i++) {
        printf("%c", quote[i]);
    }
    printf("\n");

    return 0;
}