#include <stdio.h>
#include <math.h>

int main() {
    double P, r, t, FV;
    printf("Enter principal (P): ");
    scanf("%lf", &P);
    printf("Enter rate (r): ");
    scanf("%lf", &r);
    printf("Enter time (t in years): ");
    scanf("%lf", &t);

    FV = P * pow((1 + r), t);
    printf("Future Value = %.2f\n", FV);
    return 0;
}

