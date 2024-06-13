#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define SIZE1 10

// Function prototypes
void diziyaz(int A[]);
void diziyaz1(int A[]);
void Siralama(int a[]);
int Binarysearch(int a[], int aranan);

int main()
{
    int notlar[SIZE] = {4, 15, 2, 5, 25};
    
    // Print the initial array
    printf("Initial array:\n");
    diziyaz(notlar);

    // Sort the array
    Siralama(notlar);

    // Print the sorted array
    printf("\nSorted array:\n");
    diziyaz(notlar);

    // Perform binary search on the sorted array
    int arananifade_indexi = Binarysearch(notlar, 5);
    printf("\nIndex of searched element (5) after sorting: %d\n", arananifade_indexi);

    // Taking array elements from the keyboard
    int notlar1[SIZE1];
    printf("\nEnter values for another array (size 10):\n");
    for (int i = 0; i < SIZE1; i++) {
        scanf("%d", &notlar1[i]);
    }

    // Print the second array
    printf("\nSecond array:\n");
    diziyaz1(notlar1);

    return 0;
}

// Function to print an array
void diziyaz(int A[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("index=%d, %dth element, %d\n", i, i + 1, A[i]);
    }
}

// Function to print another array
void diziyaz1(int A[]) {
    for (int i = 0; i < SIZE1; i++) {
        printf("index=%d, %dth element, %d\n", i, i + 1, A[i]);
    }
}

//--------------------------------- ARRAY SORTING ALGORITHMS METHODS -------------------------------------
// Function to perform bubble sort on an array
void Siralama(int a[]) {
    int temp, i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search on a sorted array
int Binarysearch(int a[], int aranan) {
    int low = 0;
    int high = SIZE - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (aranan == a[mid]) {
            return mid; // Return index of the found element
        } else {
            if (aranan < a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }
    return -1; // Return -1 if element is not found
}
