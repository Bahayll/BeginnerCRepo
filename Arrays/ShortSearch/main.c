#include <stdio.h>

// Function to sort an array using Bubble Sort
void bubble_sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search on a sorted array
int binary_search(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid]) {
            return mid;  // Element found
        } else if (key < a[mid]) {
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1;  // Search in the right half
        }
    }

    return -1;  // Element not found
}

int main() {
    int a[] = {150, 2520, 2, 15, 20, 30};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 30;

    // Sort the array using Bubble Sort
    bubble_sort(a, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Perform binary search
    int index = binary_search(a, n, key);

    if (index != -1) {
        printf("%d found at index %d.\n", key, index);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
