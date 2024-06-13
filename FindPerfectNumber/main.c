#include <stdio.h>
#include <stdlib.h>
/* A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 28 is a perfect number because the sum of its proper 
divisors (1, 2, 4, 7, 14) equals 28. Write a C program that prompts the user to enter a number and determines if it is a perfect number or not. */

#include <stdio.h>

// Function to check if a number is perfect
int isPerfectNumber(int number) {
    int sum = 0;

    // Find all divisors and add them
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number itself
    if (sum == number) {
        return 1; // It is a perfect number
    } else {
        return 0; // It is not a perfect number
    }
}

int main() {
    int number;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call function to check if the number is perfect
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
