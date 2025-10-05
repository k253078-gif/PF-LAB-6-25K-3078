#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);

    printf("Before swap:\n\ta = %d\n\tb = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap:\n\ta = %d\n\tb = %d\n", a, b);

    return 0;
}

