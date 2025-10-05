#include <stdio.h>

int main() {
    int amount;
    printf("Enter amount in cents: ");
    scanf("%d", &amount);

    int coins[] = {25, 10, 5, 1} , count,i;

    for ( i = 0; i < 4; i++) {
        count = amount / coins[i];
        amount %= coins[i];
        printf("%d cent coin(s): %d\n", coins[i], count);
    }
    return 0;
}

