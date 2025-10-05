#include <stdio.h>
#include <math.h>

int main() {
    double H, theta, L;
    printf("Enter building height H: ");
    scanf("%lf", &H);
    printf("Enter angle of elevation (radians): ");
    scanf("%lf", &theta);

    L = H / tan(theta);
    printf("Shadow length = %.2f\n", L);
    return 0;
}

