#include <stdio.h>
#include <stdlib.h>

// Function to perform bubble sort on an integer array in ascending order
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search on a sorted integer array
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid; // Element found, return index
        else if (arr[mid] < key)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {89, 68, 45, 37, 12, 58, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 58; // Element to search

    // Sorting the array using bubble sort
    bubbleSort(arr, size);

    // Displaying the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Performing binary search on the sorted array
    int index = binarySearch(arr, size, key);
    if (index != -1)
        printf("Element %d found at index %d\n", key, index);
    else
        printf("Element %d not found\n", key);

    return 0;
}
