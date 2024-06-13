#include <stdio.h>
#include <stdlib.h>

// Function prototype for binary search
int arama(int d[], int ara, int low, int high);

int main()
{
    int a[7] = {2, 6, 8, 10, 20, 24, 100};
    int aranan = 8; // Element to search for

    // Perform binary search
    int index = arama(a, aranan, 0, 6); // Pass array, element to find, and array bounds
    if (index != -1)
        printf("%d found at index %d\n", aranan, index);
    else
        printf("%d not found in the array\n", aranan);

    return 0;
}

// Function definition for binary search
int arama(int d[], int ara, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (ara == d[mid])
            return mid; // Element found, return index

        else if (ara < d[mid])
            high = mid - 1; // Search in the left half

        else
            low = mid + 1; // Search in the right half
    }

    return -1; // Element not found
}
