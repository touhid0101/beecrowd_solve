// 1036 - Bhaskara's Formula | Beecrowd
#include <math.h>
#include <stdio.h>

int main() {
    // taking 3 floating point numbers as input
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // calculating the determinant
    double det = pow(b, 2) - 4 * a * c;

    // calculating the roots and printing the roots
    if ((det < 0) || (a == 0)) {
        printf("Impossivel calcular\n");
    } else {
        double root1 = (-b + sqrt(det)) / (2.0 * a);
        double root2 = (-b - sqrt(det)) / (2.0 * a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", root1, root2);
    }

    return 0;
}