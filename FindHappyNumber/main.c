#include <stdio.h>
#include <stdlib.h>

int count = 0;

// Function to calculate the sum of squares of digits of a number
int sum_of_digit_squares(int number) {
    int digit = 0, sum = 0;
    
    // Loop to find digits of the number
    while (number > 0) {
        digit = number % 10; // Get the last digit
        number /= 10; // Shift number right by one digit
        sum += digit * digit; // Add square of digit to sum
    }
    
    return sum;
}

// Function to perform linear search in an array
int linear_search(int array[100], int target) {
    for (int i = 0; i < count; i++) {
        if (target == array[i]) {
            return 0; // Element found
        }
    }
    return 1; // Element not found
}

// Function to find and verify if a number is a happy number
int find_happy_number(int num) {
    int current_number;
    int numbers_visited[100]; // Array to store visited numbers
    
    numbers_visited[0] = num; // Store the initial number in the array
    
    for (int i = 1; i < 100; i++) {
        current_number = sum_of_digit_squares(num); // Calculate sum of squares of digits
        
        printf("%d   %d", num, current_number); // Print the current number and its calculated value
        
        if (current_number == 1) {
            printf("\nIt is a happy number.\n");
            break; // If the number becomes 1, it is a happy number
        } else {
            if (linear_search(numbers_visited, current_number) == 1) {
                num = current_number; // Move to the next number in the sequence
                numbers_visited[i] = current_number; // Store it in visited array
                count++;
            } else {
                printf("\nIt is not a happy number.\n");
                break; // If the number repeats, it is not a happy number
            }
        }
    }
    
    return 0;
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    find_happy_number(number); // Find and verify if the number is a happy number
    
    return 0;
}
