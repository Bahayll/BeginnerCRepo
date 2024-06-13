#include <stdio.h>
#include <stdlib.h>

void sortArray(int *array);

int main() {
    int i;
    int data[8] = {5, 15, 2, 25, 58, 22, 87, 24};

    // Call the function to sort the array
    sortArray(data);

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < 8; i++) {
        printf("%d\t", data[i]);
    }
    
    return 0;
}

// Function to sort an array in ascending order using bubble sort
void sortArray(int *array) {
    int i, j, temp;

    // Bubble sort algorithm
    for (i = 0; i < 8 - 1; i++) {
        for (j = 0; j < 8 - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
