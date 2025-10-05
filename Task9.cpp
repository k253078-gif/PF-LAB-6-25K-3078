#include <stdio.h>
#include <math.h>

int main() {
    int people;
    double costPerPerson = 250.50, totalCost;
    printf("Enter number of people: ");
    scanf("%d", &people);

    totalCost = ceil(people * costPerPerson);
    printf("Minimum total cost = %.0f\n", totalCost);
    return 0;
}

