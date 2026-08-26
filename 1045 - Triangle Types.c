// 1045 - Triangle Types - Beecrowd
#include <stdio.h>

int main() {
    // taking 3 sides of a traingle as input
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // implementing a sorting algorithm
    int temp; // clang-format off
    if (b > a) { temp = a; a = b; b = temp; }
    if (c > a) { temp = a; a = c; c = temp; }
    if (c > b) { temp = b; b = c; c = temp; }

    // clang-format on
    // verifying if triangle is formable or not
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (a * a < b * b + c * c) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || c == a) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
