#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c = 0; // Global variable to keep track of size

#define SIZE c // Define SIZE as c

int main() {
    char str[] = "Merhaba TUB"; // Input string
    char ters_str[SIZE]; // Array to store reversed portion

    int str_uzunluk = strlen(str); // Calculate the length of the input string
    printf("Cumlenin uzunlugu: %d\n", str_uzunluk);

    int k = 0, i = str_uzunluk - 1; // Initialize variables for iteration and reversal
    c = 0; // Reset c to 0

    // Traverse the string from the end until a space is encountered or the beginning is reached
    while (str[i] != ' ' && i >= 0) {
        ters_str[k] = str[i]; // Store characters in reverse order
        c++; // Increment size counter
        i--; // Move to the previous character
        k++; // Move to the next position in reversed array
    }

    ters_str[k] = '\0'; // Terminate the reversed string with null character to make it a valid C-string

    printf("Tersten yazilisi: %s\n", ters_str); // Print the reversed portion of the string
    printf("Uzunlugu: %d\n", c); // Print the length of the reversed portion

    return 0;
}
