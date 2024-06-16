#include <stdio.h>
#include <stdlib.h>
// The previous program was not executed, the previous operations were done at the address, in order to fix it we need to make it int and change the value or perform operations on the address.int main()

void sort(int *array);
void swap(int *element1, int *element2);

int main() {
    int a[9] = {2, 6, 4, 8, 12, 89, 68, 45, 37};
    int i;

    // Call the sort function to sort the array 'a'
    sort(a);

    // Print the sorted array
    printf("Sorted Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}

// Function to sort an array of integers using pointers
void sort(int *array) {
    int i, j;

    // Iterate over the array to perform bubble sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            // Compare adjacent elements and swap if necessary
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

// Function to swap two elements pointed by pointers
void swap(int *element1, int *element2) {
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
