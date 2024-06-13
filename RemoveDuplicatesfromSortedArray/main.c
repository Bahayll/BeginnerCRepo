#include <stdio.h>
#include <stdlib.h>

int length = 0;

// Function to remove duplicates from a sorted array
void remove_duplicates(int sorted_array[]) {
    int count = 0; // Count of unique elements
    int a = 0, b = 1, c = 0; // Indices representing positions in the array

    for (int j = 0; j < length; j++) {
        if (sorted_array[a] == sorted_array[b]) {
            // If elements are equal, move both indices forward
            b++;
            a++;
        } else {
            if (a == 0) {
                // Handle the first occurrence separately
                a++;
                b++;
                c++;
                count++;
            } else {
                // Place the unique element at position c + 1 and move indices forward
                c++;
                sorted_array[c] = sorted_array[b];
                a++;
                b++;
                count++;
            }
        }
    }

    // Print the array after removing duplicates
    printf("Sorted array after removing duplicates:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", sorted_array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 1, 1, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 11};
    length = sizeof(array) / sizeof(array[0]);

    printf("Length of the array: %d\n", length);

    printf("Original sorted array:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    remove_duplicates(array);

    return 0;
}
