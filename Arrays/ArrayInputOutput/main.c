#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int notlar[SIZE]; // Define an array to hold SIZE integers
    int i;

    // Input loop to read integers from the user
    printf("Enter %d integers:\n", SIZE);
    for(i = 0; i < SIZE; i++) {
        scanf("%d", &notlar[i]); // Read an integer and store in the array
    }

    // Output loop to print each integer with its index
    for(i = 0; i < SIZE; i++) {
        printf("index = %d, %d. element = %d\n", i, i + 1, notlar[i]);
    }

    return 0;
}
