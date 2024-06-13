#include <stdio.h>
#include <stdlib.h>

int POW(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("Result = %d\n", POW(base, exponent));

    return 0;
}

// Function to calculate power using iterative approach
int POW(int base, int exponent) {
    int result = 1;

    // If exponent is 0, base^0 is 1
    if (exponent == 0) {
        return 1;
    }

    // If base is 0 or exponent is 1, base^1 or 0^anything is base or 0
    if (base == 0 || exponent == 1) {
        return base;
    }

    // Multiply base by itself exponent times
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
